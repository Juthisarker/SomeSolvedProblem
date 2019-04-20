#include <stdio.h>
#include<string.h>
int main ()
{
    int hh,mm,ss;
    char t12[2];
    scanf("%d:%d:%d",&hh,&mm,&ss,tw24);
    if(strcmp(tw24,"PM")==0 && hh!=12)
    {
        hh=hh+12;
    }
    if(strcmp(tw24,"AM")==0 && hh==12)
    {
        hh=0;
    }
    return 0;
}
