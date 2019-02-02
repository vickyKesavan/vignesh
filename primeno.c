#include <stdio.h>
#include <stdlib.h>
int main ()
{

int n,i;
int a=1;
    printf("\n");
    scanf("%d", &n);
    if(n<=1000)
    {
   for(i=2;i<=n/2;i++)
   {

       if(n%i==0)
       {
           a=0;
           break;
       }
   }
    if(a==1)
    {
        printf("yes",n);
    }
   else
    {
   printf("no",n);
   }
    }
    else{
        printf("no");
    }
   return 0;
}
