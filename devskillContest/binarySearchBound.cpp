#include <bits/stdc++.h>
using namespace std;

int lower(int a[],int n,int key)
{
    int res;
    int s=0;
    int e=n-1;
    //int res=-1;
    while(s<=e)
    {
    int mid=(s+e)/2;
    if(a[mid]==key)
    {
        res=mid;
        e=mid-1;
    }
    else if(a[mid]>key)
    {
        e=mid-1;
    }
    else{
        s=mid+1;
    }
}
return res;
}



int main ()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int val=lower(a,n,35);

    cout<<"lower"<<val<<endl;

}
