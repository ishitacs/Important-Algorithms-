#include <iostream>

using namespace std;
int part(int a[],int l,int h)
{ int p=a[h];
int i=l-1;;
for(int j=l;j<=h-1;j++)
{if(a[i]<=p){i++; swap(a[i],a[j]);}

}
swap(a[i+1],a[h]);
return i+1;
}

int quick(int a[],int l,int h,int k)
{
while(l<=h){
        int ind=part(a,l,h);
 if(ind==k-1) return a[ind];
 else if(ind>k-1) h=ind-1;
 else l=ind+1;
}
return -1;
}
int main()
{

    int arr[]={2,5,4,1,3,6};
    cout<<quick(arr,0,5,3)<<endl;


    return 0;
}
