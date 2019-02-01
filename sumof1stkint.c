#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
  int i,a,b,j;
   int sum=0;
  printf("\t");
  scanf("%d",&a);
  printf("\n");
   scanf("%d",&b);
  for(i=1;i<=a;i++)
  {
      printf("%d\n",i);

  }
   for(j=1;j<=b;j++)
   {
       sum=sum+j;

   }

   printf("%d",sum);
  return 0;
}
