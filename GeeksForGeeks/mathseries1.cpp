#include <iostream>
using namespace std;
int main()
{
    int a,b,t,n,d,term;
    cin>>t;

    while(t--)
    {
        cin>>a>>b>>n;
         d=b-a;
        term=a+((n-1)*d);
       cout<<term<<endl;
    }
}
