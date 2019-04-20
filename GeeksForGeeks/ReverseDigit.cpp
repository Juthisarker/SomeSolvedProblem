#include<iostream>
using namespace std;
int main ()
{
    int t;
   cin>>t;
   while(t--)
   {

    long long int number,temp=0;
    cin>>number;
    int d,t;
    while(number)
    {
       d=number%10;
       number=number/10;
       temp=(temp*10)+d;

    }
    cout<<temp<<endl;
}
}
