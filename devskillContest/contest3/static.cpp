#include<stdio.h>
#include<conio.h>
#define max(a,b) (a>b ? a:b)
int main()
{
int i =1;
int j=2;
int k = 0;
//printf("i:  j: %d %d  ",++i,++j);
k = max(++i,++j);

printf("%d",k);
return 0;
}
