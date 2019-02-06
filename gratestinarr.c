#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int arr[50],i,largest,size;
    printf("\n");
    scanf("%d",&size);
    printf("\n");

    for(i=0;i<size;i++)
          scanf("%d",&arr[i]);

        largest=arr[0];

    for(i=1;i<size;i++)
        {
           if(largest<arr[i])

        largest=arr[i];
    }
      printf("\n%d",largest);
    return 0;
}
