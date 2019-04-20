#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n,m,d;
     while (scanf ("%d %d %d",&n,&m,&d) != EOF)
     {
    int arr[2000];
    int res=0, flag=0;
    int k=(n*m);
    for(int i=0;i<k;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int x=(k/2);
    int mid=arr[x];
      int first=arr[0];
      if(first!=d)
      {
           cout<<"-1"<<endl;

      }
   else
      {
    for(int i=0;i<k;i++)
    {

        res=res+abs(arr[i]-mid);

    }

    int f=(res/d);
    cout<<f<<endl;
    }
}
}
