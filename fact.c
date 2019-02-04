#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,fact=1,i;
    printf("\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;

    }
    printf("%d\n",fact);
    return 0;
}
