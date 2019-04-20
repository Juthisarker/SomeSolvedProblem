#include <iostream>
using namespace std;
int main ()
{
    int x1,x2,v1,v2,j1=1,j2=1,distance1,distance2;
    cin>>x1>>v1>>x2>>v2;
    if(x2>x1 && v2>v1)
    {
    cout<<"NO"<<endl;
    }
    else{
    while(distance1!=distance2)
    {
    distance1=(x1+(j1*v1));
    distance2=(x2+(j2*v2));
    j1++;
    j2++;
    if(distance1==distance2)
    {
        cout<<"YES"<<endl;
        break;
    }
    }
    }

}
