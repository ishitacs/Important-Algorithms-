 #include <bits/stdc++.h>

using namespace std;

int binarySearch(vector<int> a,int x)
{
     int l=0;
     int h=a.size()-1;
     while(l<h)
     {
         int m=(h-l)/2;
         if(x==a[m]) return m;
         else if(x>a[m])l++;
         else if(x<a[m])h--;
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
    return binarySearch(a,k);
    return 0;
}
