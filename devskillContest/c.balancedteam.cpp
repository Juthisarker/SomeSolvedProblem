#include<bits/stdc++.h>
using namespace std;
int n,k, arr[200000];

int main ()
{
    int n,val=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        int res=upper_bound(arr,arr+n,arr[i]+5)-arr;

        val=max(val,res-i);

    }
    printf("%d\n",val);

    return 0;
}
