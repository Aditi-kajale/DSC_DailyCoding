#include<iostream>
using namespace std;
int main() {
  int i, j, sum = 0, maxleft, maxright, n , *arr;
  cout<<"Enter no of elements ";
  cin>>n;
  cout<<"Enter array elements ";
  arr = new int[n];
  for(i=0;i<n;i++)
     cin>>arr[i];
  for(i=1;i<n-1;i++)
  {
    maxleft = arr[i-1];
    for(j = i-1; j>=0; j--)
    {
      if(maxleft < arr[j])
        maxleft = arr[j];
    }
    maxright = arr [i+1];
    for(j=i+1; j<n;j++)
    {
      if(maxright<arr[j])
        maxright = arr[j];
    }
    if(arr[i] >maxleft || arr[i] >maxright)
      continue;
    if(maxleft<maxright)
      sum += maxleft - arr[i];
    else
      sum += maxright - arr[i];
  }
  cout<<sum;
  delete []arr;
  return 0;
}