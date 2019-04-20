#include <iostream>

using namespace std;
int main ()
{
    int t,a,sum=0,d1,v,flag=0,check,rev=0,d2;
    cin>>t;
    while(t--)
    {
    cin>>a;
    while(a!=0)
    {
      d1=a%10;
     a=a/10;
     sum=sum+d1;
    }

    check=sum;
  while(sum)
  {
      d2=sum%10;
      rev=(rev*10)+d2;
      sum=sum/10;
  }

  if(check==rev)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
    }
    return 0;
}
