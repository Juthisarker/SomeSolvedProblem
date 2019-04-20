#include <iostream>
using namespace std;
int main ()
{
    int n,m,red,blue,c=0;
    cin>>n>>m;
    while(n!=m)
    {
        if(m>n)
        {
            if(m%2==0)
            {
                m=m/2;
                c++;
            }
        }
        else if(n>m)
        {
            m++;
           c++;
        }


    }
    cout<<c<<endl;
}
