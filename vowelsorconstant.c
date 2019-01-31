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
           if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I'
    ||a=='o' ||a=='O' || a=='u' || a=='U')

        {
     printf("vowels");
    }
       else{
        printf("constant");
       }
       }
else {
        printf("invalid");
}

   return 0;
}

