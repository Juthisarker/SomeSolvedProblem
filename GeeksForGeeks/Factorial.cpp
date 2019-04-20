#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
       long long  int n,f=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            f=f*i;
        }
        cout<<f<<endl;
    }
}
