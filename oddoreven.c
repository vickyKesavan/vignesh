#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("\n");
    scanf("%d",&a);
    if (a<0){
        printf("Invalid");
    }
    else if(a%2==0)
    {
        printf("even");
    }
    else
        {
        printf("odd");
    }
    return 0;
}
