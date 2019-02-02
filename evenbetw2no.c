#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int a,b,c;
    printf("\n");
    scanf("%d%d",&a,&b);
    for(c=a+1;c<=b;c++)
    {
        if(c%2==0)
    {

    printf("%d\n",c);
    }
    }
    return 0;
}
