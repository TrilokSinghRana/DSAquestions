#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[7]={2,3,5,9,14,16,18};
  int target=14;
  int start=0;
  int end=sizeof(arr) / sizeof(arr[0])-1;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
      cout<<mid;
      return mid;
    }
    else if(arr[mid]>target){
      end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return 0;

}