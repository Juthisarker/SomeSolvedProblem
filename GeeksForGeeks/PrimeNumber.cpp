#include<iostream>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
    int p,flag=0;
    cin>>p;
    for(int i=2;i<p;i++)
    {
        if(p%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
         cout<<"No"<<endl;
    }
}
}
