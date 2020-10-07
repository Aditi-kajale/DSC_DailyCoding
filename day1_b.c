#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, max, maxfinal, *temp, *final, sum,key, *arr,n;	
    printf("Enter no of elements :-");
    scanf("%d", &n);
    printf("Enter elements : - ");
    arr = (int *)malloc(sizeof(int) *n);
    temp = (int *)malloc(sizeof(int) *n);
    final= (int *)malloc(sizeof(int) *n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i<n; i++)
    {
        sum = 0;
        for( j =0; j<n-1; j++)
        {
            sum +=arr[j];
            temp [j] = sum;
        }
        max= temp[0];
        for(j=1;j<n-1;j++)
        {
            if(temp[j]>max)
                max  =temp[j];
        }
        final[i] = max;
        key = arr[0];
        for(j = 1; j< n; j++)
            arr [j-1] = arr[j];
        arr[n-1] = key;
        
    }
    maxfinal = final [0];
    for(i = 1; i<n; i++)
    {
      if(final [i]>maxfinal)
        maxfinal = final[i];
    }
    printf("%d", maxfinal);
}
