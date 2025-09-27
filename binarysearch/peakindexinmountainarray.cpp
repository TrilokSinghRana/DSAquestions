#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[7]={2,4,6,8,10,8,5};
  int start=0;
  int end=6;
  while(start<=end){
    int mid=start+(end-start)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
     cout<<mid;
     return 0;
    }
    else if(arr[mid]>arr[mid+1]){
    end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  return -1;
}