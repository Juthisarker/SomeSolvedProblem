#include <bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,i;
    cin>>n;
   long long  int d[n];
    char arr[n];
    long int res=1;
    for( i=0;i<n;i++)
    {
       cin>>arr[i];

    }
        for( i=0;i<n;i++)
    {
       cin>>d[i];

    }
     for( i=0;i<n;i++)
    {
       if(arr[i]=='>')
       {
           res=res+d[i];

       }
       else if(arr[i]=='<')
       {
           res=abs(res-d[i]);

       }
    }
if(res==0 || res >n)
{
    cout<<"FINITE"<<endl;

}
else
{

    cout<<"INFINITE"<<endl;

}

}
