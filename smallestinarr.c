#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[50],i,smallest,size;
    printf("\n");
    scanf("%d",&size);
    printf("\n");

    for(i=0;i<size;i++)
          scanf("%d",&arr[i]);

        smallest=arr[0];

    for(i=1;i<size;i++)
        {
           if(arr[i]<smallest)
        smallest=arr[i];

    }
      printf("\n%d",smallest);
    return 0;
}
