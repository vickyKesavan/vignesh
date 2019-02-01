#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
 int a;
 int count=0;
 printf("\n");
 scanf("%d",&a);
 while(a>0)
 {
     a=a/10;
     count=count+1;
 }
 printf("%d",count);
 return 0;

}

