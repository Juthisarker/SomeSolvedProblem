#include <iostream>
using namespace std;

int gcd(int a, int b)
    {
       int rem,g;
       while(b!=0)
       {
    if(a>b)
    {
      rem=a%b;
       a=b;
       b=rem;
    }
    else{
        int temp =a;
        a=b;
        b=temp;

        rem=a%b;
        a=b;
        b=rem;
    }
    }
    g=a;
    return g;
    }

int main ()
{
    int n1,n2;
    cin>>n1>>n2;

   int res= gcd(n1,n2);
   cout<<"gcd :"<<res;
}

