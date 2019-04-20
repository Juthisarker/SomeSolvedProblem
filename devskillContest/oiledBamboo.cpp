#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int t,testcase=0,n,k=0,c=0;
    int arr[10000];
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<n-1;i++)
        {

           k= arr[i+1]-arr[i];

           if(k>c)
           {
              c=k;
           }
        }
        testcase++;
        cout<<"Case "<<testcase<<": "<<c<<endl;

    }
}
