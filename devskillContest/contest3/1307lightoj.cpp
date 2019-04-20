#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,res,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            sum=a[i]+a[j];
           res=upper_bound(a,a+n,sum-1)-a;
             cout<<"sum :"<<sum<<"  res:"<<res;


        }
    }

}
