#include<stdio.h>
#include<stdlib.h>
int main() {
  int *arr, sum, n , i, j, sumnew, flag;
  printf("Enter no of elements :-");
  scanf("%d", &n);
  printf("Enter elements :-");
  arr = (int *)malloc(sizeof(int)*n);
  for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
  printf("Enter sum :-");
  scanf("%d", &sum);
  for(i = 0; i<n-1;i++)
  {
    flag =0; 
    sumnew = arr[i];
    for(j = i+1; j<n;j++)
    {
      sumnew += arr[j];
      if(sumnew == sum)
      {
        flag =1;
        break;
      }
    }
    if(flag)
      break;
  }
  if(flag)
    printf("SUM found between indexes %d and %d", i, j);
  else
    printf("SUM not found");
  free(arr);
  return 0;
}
