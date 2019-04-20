#include <iostream>
using namespace std;
int main ()
{
    int n,a,sum=0,c1,c2,c3,c4;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
        {
            c1++;
        }
        else if(a==2)
        {
            c2++;
        }
        else if(a==3)
        {
            c3++;
        }
        else
            {
                c4++;
            }
    }
    sum=sum+c4;
    c4=0;
    sum=sum+c2/2;
    c2=c2%2;
    if(c1>=c3)
    {
        sum=sum+
    }
   c1=c1%4;
   if((c1+c2*2)<=4 && (c1+c2*2)>0)
   {
       sum++;
       c1=0;
       c2=0;
   }
   else if(c1==3 && c2==1)
   {
       sum=sum+2;
       c1=0;
       c2=0;
   }
}
