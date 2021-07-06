#include <bits/stdc++.h>

using namespace std;
int boyermoor(vector<int>a)
{
    int m;
    int i = 0;
    for (int j = 0; j < a.size(); j++)
    {
        if (i == 0) {
            m = a[j], i = 1;
        }

        else {
            (m == a[j]) ? i++ : i--;
        }
    }
    i=0;
     for (int j = 0; j < a.size(); j++)
     {
         if(a[j]==m) i++;
     }
   return i>a.size()/2? m: -1;
}

int main()
{
    vector<int>arr={2,2,4,1,2,2};
    cout<<boyermoor(arr)<<endl;

    return 0;
}
