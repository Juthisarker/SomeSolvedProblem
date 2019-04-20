#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[1000],c=0;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(((arr[i]+arr[j])>arr[k]))
                {
                   c++;
                }
            }
        }
    }
    cout<<"c :"<<c<<endl;

}
