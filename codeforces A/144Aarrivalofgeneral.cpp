#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int min,min_i,max,max_i;
    min=arr[0];
    min_i=0;
    max=arr[0];
    max_i=0;
    for(int i=0;i<n;i++)
    {
        if(min>=arr[i])
        {
            min=arr[i];
            min_i=i;
        }
        if(max<arr[i])
        {
            max=arr[i];
            max_i=i;
        }
    }
    if(min_i<max_i)
    {
        min_i=(n-1)-min_i;
        cout<<(min_i+max_i-1)<<endl;
    }
    else{

        min_i=(n-1)-min_i;
        cout<<(min_i+max_i)<<endl;
    }

}
