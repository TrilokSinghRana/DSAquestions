#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={-1,-2,3,4,-1};
  int curr_sum=0;
  int max_sum=INT_MIN;
  int n=sizeof(arr) / sizeof(arr[0]);
  for(int i=0;i<n-1;i++){
    curr_sum=curr_sum+arr[i];
    if(curr_sum<0){
      curr_sum=0;
    }
    max_sum=max(max_sum,curr_sum);
  }
 cout<<max_sum;
}