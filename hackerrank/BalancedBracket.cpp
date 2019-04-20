
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* isBalanced(char* s) {
    int i=0,j=0;
    char c[strlen(s)-1];


  for(i=0;i<=strlen(s)-1;i++)
  {
      if(s[i]=='('||s[i]=='{'||s[i]=='[')
         {
          c[j++]=s[i];
          //printf("%d%d%c%c",i,j,s[i],c[--j]);
         }

      else
          {
              if(s[i]==')'&&c[--j]=='(')
              {
                 ;
              }
              else{
                    if(s[i]=='}'&&c[--j]=='{')
                   {
                      ;
                   }
                    else
                        {
                         if(s[i]==']'&&c[--j]=='[')
                         {
                            ;
                         }
                         else
                            return "NO";

                         }
                  }
           }
      }
    if(j==0)
        return "YES";
    else
        return "NO";


}

int main() {
    int t,a0;
    scanf("%i", &t);
    for( a0 = 0; a0 < t; a0++){
        char* s = (char *)malloc(512000 * sizeof(char));
        scanf("%s", s);
        char* result = isBalanced(s);
        printf("%s\n", result);
    }
    return 0;
}
