#include<iostream>
using namespace std;
int main ()
{
    int a,b,d,m;
    int sum;
    cin>>a>>b;
    sum=a;
    while(a>=b)
    {
       d=a/b;
       sum=sum+d;
       m=a%b;
       a=(m+d);
    }
    cout<<sum<<endl;
}
