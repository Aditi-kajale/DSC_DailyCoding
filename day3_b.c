#include<stdio.h>
#include<stdlib.h>

int main() {
  int i, j, flag =0, diff, n , m, *arr ;
  printf("Enter no of elements :-");
  scanf("%d", &n);
  arr = (int *)malloc(sizeof(int)*n);
  printf("Enter elements :-");
  for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
printf("Enter difference :-");
  scanf("%d", &m);
  for(i =0 ;i<n-1; i++)
  {
    for(j = i+1; j<n;j++)
    {
      diff = arr[i] - arr[j];
      if(diff <0)
        diff = -diff;
      if(diff ==m)
      {
        flag = 1;
        break;
        
      }
    }
    if(flag)
      break;
  }
  if(flag)
    printf("Pair found (%d,%d)",arr[i],arr[j]);
  else
    printf("Pair not found");
  free(arr);
  return 0;
}
