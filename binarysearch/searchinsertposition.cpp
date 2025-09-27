#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[8]={1,4,6,8,10,14,16,18};
  int start=0;
  int end=7;
  int target=5;
  while(start<=end){
     int mid=start+(end-start)/2;
     if(arr[mid]==target){
       return mid;
     }
     else if(arr[mid]>target){
      end=mid-1;
     }
     else{
      start=mid+1;
     }
  }
  cout<<start;
}