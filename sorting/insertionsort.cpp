#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={10,9,8,7,6,5};
  int n=sizeof(arr)/sizeof(arr[0])-1;
  for(int i=0;i<n;i++){
    for(int j=n;j>0;j--){
      if(arr[j]<arr[j-1]){
        swap(arr[j],arr[j-1]);
      }
      else{
        break;
      }
    }
  }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}