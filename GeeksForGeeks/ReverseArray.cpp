#include <stdio.h>
void reverse_array(int i,int n, int *a)
{
    if(i<n)
    {
     reverse_array(i+1,n,a);
     printf("%d",a[i]);
    }

}
int main ()
{
    int n,a[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse_array(0,n,a);

}
