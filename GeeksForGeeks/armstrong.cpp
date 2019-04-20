#include <iostream>
using namespace std;
int main ()
{
    int n,d,v,sum=0,q,h,a,t;
    cin>>t;
    while(t--)
    {
        cin>>a;
    h=a;
    while(a!=0)
    {
        d=a%10;
        a=a/10;
        q=(d*d*d);
        sum=sum+q;

    }
    if(h==sum)
    {
        cout<<"yes"<<endl;
    }
    else{
         cout<<"n0"<<endl;
    }
    }

}
