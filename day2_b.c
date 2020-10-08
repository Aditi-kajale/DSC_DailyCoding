#include<stdio.h>
#include<stdlib.h>

int main() {
  int i, j, flag=0, suml,sumr,n, *arr ;
  printf("Enter no of elements :-");
  scanf("%d", &n);
  printf("Enter elements :-");
  arr = (int *)malloc(sizeof(int)*n);
  for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
  for(i=1;i<n-1;i++)
  {
    suml=0;
    sumr=0;
    for(j=i-1;j>=0;j--)
      suml+=arr[j];
    for(j=i+1;j<n;j++)
      sumr+=arr[j];
    if(sumr ==suml)
    {
      flag =1;
      break;
    }
  }
  if(flag)
    printf("%d",i);
  else
     printf("-1");
  free(arr);
  return 0;
}
