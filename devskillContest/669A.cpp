#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,r;
    cin>>n;
    if(n%3==0)
    {
       r=(n/3)*2;
       cout<<r<<endl;
    }
    else{
    if(n<3)
    {
        cout<<1<<endl;
    }
    else
        {
            r=((n/3)*2)+1;
    cout<<r<<endl;
        }
}
}
