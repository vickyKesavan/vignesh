#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a,n,sum,d,i,result=0;
 printf("\n");
 scanf("%d%d%d",&n,&a,&d);
 if(n,a,d<=10000)
 {
     sum=((n*(2*a+(n-1)*d))/2);
     result=(a+(n-1)*d);
     for(i=a;i<=result;i=i+d)
     {
         if(i!=result)
         {
             printf("");
         }else
         {
         printf("%d\n",sum);
         }

     }
 }
 return 0;
}
