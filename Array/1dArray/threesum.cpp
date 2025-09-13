#include <bits/stdc++.h>
using namespace std;
int main()
{ //o(n^3)
  // int arr[6]={1,4,45,6,10,8};
  // int target=24;
  // int n=6;
  // for(int i=0;i<n-2;i++){
  //   for(int j=i+1;j<n-1;j++){
  //     for(int k=j+1;k<n;k++){
  //       if(arr[i]+arr[j]+arr[k]==target){
  //         cout<<i<<j<<k;
  //         return 0;
  //       }
  //     }
  //   }
  // } 
  // return 0;
 
  // o(logn)*o(n);
  int arr[6]={1,4,6,8,10,45};
  int target=24;
  int n=6;
  for(int i=0;i<n-2;i++){
    int ans=target-arr[i];
    int start=i+1;
    int end=n-1;
    while(start<end){
      if(arr[start]+arr[end]==ans){
        cout<<i<<start<<end;
        return 0;
      }
      else if(arr[start]+arr[end]>target){
        end--;
      }
      else{
        start++;
      }
    }
  }

}