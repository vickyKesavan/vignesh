#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[10000],a,temp,i,j;
    printf("\n");
    scanf("%d",&a);
    printf("\n");
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<(a-i-1);j++)
{

    if(arr[j]>arr[j+1])
    {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
    }
    }
    for(i=0;i<a;i++)
    {
        printf("%d\n",arr[i]);
    }
return 0;
}
