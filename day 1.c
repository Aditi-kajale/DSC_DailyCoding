#include<stdio.h>
#include<stdlib.h>
int main() {
    int *arr, k, i, n;
    int j, temp ,*last, *new, max, maxfinal;
    printf("Enter no of array elements and value of k");
    scanf("%d%d", &n, &k);
    printf("Enter elements : - ");
    arr = (int *)malloc(sizeof(int) *n*k);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int l = 0; l< k -1; l= l+n)
    {
        for(i = l; i< l+ n ; i++)
        {
            j = i +n;
            arr[j] = arr [i];
        }
    }
    last = (int *)malloc(sizeof(int) *n*k);
    new = (int *)malloc(sizeof(int) *n*k);
    for(i = 0; i< n*k ; i++)
    {
        temp = 0;
        for(j = i; j<n*k; j++)
        { 
        temp += arr[j];
        new[j-i] = temp;
        }
        max = new[0];
        for(j = 1; j <n*k -i; j++)
        {
            if(new[j] >max)
                max = new[j];
        }
        last[i] = max;
    }  
  maxfinal= last[0];
  for(i = 1; i<n*k; i++)
  {
    if(last[i] >maxfinal)
      maxfinal = last[i];
  }
  printf("%d", maxfinal);
  return 0;
}