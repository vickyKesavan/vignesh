#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int year;
   printf("\n");
   scanf(" %d",&year);
   if(year%4==0)
   {
    printf("Yes");
   }
   else{
    printf("No");
   }
   return 0;
}
