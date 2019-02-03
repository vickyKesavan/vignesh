#include <stdio.h>
#include <stdlib.h>

int main()
{
     int a,temp,sum=0,rem=0,cube=0;
    printf("\n");
    scanf("%d",&a);
    temp=a;
    if(a<=100000)
    {
    while(a!=0)
    {
        rem=a%10;
        cube=pow(rem,3);
        sum=sum+cube;
       a=a/10;
    }
    if(sum==temp)
    {
        printf("armstrong",a);
    }
    else{
        printf("no");
    }
    }
return 0;
}
