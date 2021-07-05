#include <bits/stdc++.h>

using namespace std;

int linearSearch(vector<int> a,int x)
{
    for(int i=0;i<a.size();i++)
    {
        if(a[i]==x) return i;
    } return -1;
}
int main()
{

    cout << "Enter size " << endl;
    int n; cin>>n;
    vector<int>a;
   cout << "Enter elements" << endl;
   while(n--)
   { int x;
   cin>>x;
       a.push_back(x);
   }
    cout << "Enter element to be searched" << endl;
    int k; cin>>k;
    return linearSearch(a,k);
    return 0;
}
