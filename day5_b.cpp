#include<iostream>
using namespace std;
int main() {
  int i, j, flag, buy, n , *arr;
  cout<<"Enter no of elements ";
  cin>>n;
  cout<<"Enter array elements ";
  arr = new int[n];
  for(i=0;i<n;i++)
     cin>>arr[i];
  char ch = 'n';
  for(i=0;i<n-1;)
  {
    flag = 0;
    buy = arr[i];
    for(j=i+1;j<n && arr[j] > buy; j++)
    {
      flag = 1;
      ch = 'y';
    }
    if(flag)
      cout<<"Buy on day "<<i<<" and sell on "<<j-1<<endl;
    i = j;
  }
  if(ch == 'n')
    cout<<"No such days";
  delete []arr;
  return 0;
}