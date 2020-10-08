#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
int main()
{
  int *arr, i,j, m, key, noe,diff;
  printf("Enter no of packets :-");
  scanf("%d", &noe);
  arr = (int *)malloc(sizeof(int)*noe);
  printf("Enter elements :-");
  for(i = 0; i < noe; i++)
        scanf("%d", &arr[i]);
  printf("Enter no of students:-");
  scanf("%d", &m);
  if(m > noe) 
{
	printf("Number of students is greater then number of packets");
	return EINVAL;
}

  for(i = 1; i<noe; i++)
  {
    key = arr[i];
    for(j = i-1; j>=0 && arr[j] >key; j--)
      arr[j+1] = arr[j];
    if( i !=j+1)
      arr[j+1] = key;
  }
  diff = arr[m-1] - arr[0];
  printf("Minimum difference is %d",diff);
  free(arr);
}