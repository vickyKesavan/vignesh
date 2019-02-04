#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,num,fact=0,i;
    printf("\n");
    scanf("%d",&num);
    for(i=1;i<=5;++i)
    {
      fact+=num;
    printf("%d\n",fact);
    }
    return 0;
}
