#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
    int n1, n2, i, gcd;
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

  int lcm=(n1*n2)/gcd;
    printf("%d %d\n",lcm,gcd);

}

    return 0;
}