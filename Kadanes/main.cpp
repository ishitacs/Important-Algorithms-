#include <bits/stdc++.h>

using namespace std;
int maxSum(vector<int>arr)
{
    int cs=0;
    int ms=INT_MIN;
    for(auto i:arr)
    {
        cs+=arr[i];
         if(cs<0) cs=0;
    ms=max(ms,cs);
    }
   return ms;
}
int main()
{  int main()

    vector<int>arr={2,2,4,1,2,2};
    cout<<maxSum(arr)<<endl;

    return 0;
}


