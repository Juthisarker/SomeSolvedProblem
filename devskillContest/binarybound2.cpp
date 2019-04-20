#include <bits/stdc++.h>
using namespace std;

int upper(int a[],int n,int k)
{
     int low , high , mid ;
    low = 0 ;
    high = n-1 ;
    int ans=-1;
    while(low <= high){
        mid = ( low + high ) / 2 ; // finding middle element
        if(a[mid] == k )
        {
            ans=mid;
            low=mid+1;
        }// checking conditions for lowerbound

        else if(a[mid] >k) // answer should be in left part
            high = mid - 1 ;
        else                // answer should in right part if it exists
            low = mid + 1 ;
    }
    return ans ;

}



int main ()
{
   int n,res,sum=0,c=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            sum=a[i]+a[j];
           res=upper(a,n,sum);
           c=c+(res-j);
             cout<<"sum :"<<sum<<"  res:"<<res<<endl;


        }
    }
    cout<<"c :"<<c;
}
