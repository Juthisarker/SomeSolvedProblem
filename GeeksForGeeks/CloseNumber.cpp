#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t;
    cin>>t;
    while(t--)
    {int n,m,q,res1,res2,h;
    cin>>n>>m;
    q=(n/m);
    res1=(m*q);
    res2=(n*m);
    if(res2>0)
    {
      res2=(m*(q+1));
    }
    else{
         res2=(m*(q-1));
    }
    if(abs(n-res1)<abs(n-res1))
    {
        cout<<res1<<endl;
    }
    else
    {
        cout<<res2<<endl;

    }
}
}
