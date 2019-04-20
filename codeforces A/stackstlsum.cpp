#include<iostream>
#include <stack>
using namespace std;
int main ()
{
    int sum=0,n,var;
    stack<int> mystack;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>var;
        mystack.push(var);
    }
    while(!mystack.empty())
    {
        sum=sum+mystack.top();
        mystack.pop();
    }
    cout<<"sum"<<sum<<endl;


}
