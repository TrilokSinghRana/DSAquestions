#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[7]={2,3,5,9,14,16,18};
  int start=0;
  int end=sizeof(arr)-1;
  int target=15;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]==target){
       return mid;
    }
    else if(arr[mid]<=target){
      start=mid+1;
    }
    else{
      end=mid-1;
    }
  }
  return end;
}