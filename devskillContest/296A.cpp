#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,r, c=1,c2=1;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]==arr[i+1])
        {
           c++;
           if(c>c2)
           {
               c2=c;
           }

        }
        else{
            c=1;
        }
    }
    int res=(n+1)/2;
    if(c2<=res)
    {
        cout<<"YES"<<endl;
    }
    else
        {
             cout<<"NO"<<endl;
        }


    return 0;


}
