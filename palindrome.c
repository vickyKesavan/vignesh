#include <stdio.h>
#include <stdlib.h>
int main ()
{

int n, reversedInteger = 0, rem, a;
    printf("\n");
    scanf("%d", &n);

    a = n;
if(n<=1000)
{

    while( n!=0 )
    {
        rem = n%10;
        reversedInteger = reversedInteger*10 + rem;
        n /= 10;
    }
    if (a == reversedInteger)
    {

        printf( "Yes", a);
    }
    else{
        printf("No", a);
    }
    }
    else{
        printf("no");
    }
    return 0;
}
