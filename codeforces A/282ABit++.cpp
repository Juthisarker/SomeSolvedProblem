#include<iostream>
using namespace std;
int main ()
{
    int x=0,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='+'|| s[1]=='+')
        {
            x++;
        }
        else if(s[0]=='-'|| s[1]=='-')
        {
            x--;
        }
    }
    cout<<x<<endl;

}
