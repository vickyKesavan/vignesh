#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   char a;
   printf("\n");
   scanf("%c",&a);
   if(isalpha(a))
   {
     printf("alphabet");
    }
       else{
        printf("No");
       }

   return 0;
}

