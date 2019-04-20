#include<bits/stdc++.h>
using namespace std;
int n,k, arr[100010],s[100010];

int main ()
{
    int n,m,val=0,t;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        val=val+arr[i];
        s[i]=val;
    }
    scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d",&t);
         int res=lower_bound(s,s+n,t)-s+1;
         printf("%d\n",res);
    }

    return 0;
}
