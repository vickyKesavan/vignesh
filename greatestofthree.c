#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int a,b,c;
   printf("\n");
   scanf("%d%d%d",&a,&b,&c);
       if(a>b){
        if(a>c)
            {
              printf("%d",a);
            }
        else
        {
            printf("%d",a);
        }
       }
       else if(b>c){
       printf("%d",b);
       }else{
       printf("%d",c);
       }
       return 0;
}

