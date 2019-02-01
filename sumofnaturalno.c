#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
   int a,i;
   int sum=0;
   printf("\n");
   scanf("%d",&a);
   for(i=1;i<=a;i++)
   {
       sum=sum+i;

   }
   printf("%d",sum);
   return 0;
}

