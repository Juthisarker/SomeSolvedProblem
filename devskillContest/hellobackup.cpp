#include<iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,key,j;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
  for(int i=1;i<n;i++)
   {
       key=arr[i];
       j=i-1;
       while(j>=0&&arr[j]>key)
       {
           arr[j+1]=arr[j];
           j=j-1;
       }
       arr[j+1]=key;

   }
    int mid=floor(n/2);

    cout<<arr[mid]<<endl;
}
