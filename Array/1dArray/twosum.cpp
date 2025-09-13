// only work for two pointer
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={2,7,11,15,27};
  int target=22;
  int start=0;
  int end=4;
  int count=0;
  while(start<end){
    if(arr[start]+arr[end]==target){
      count++;
     cout<<"the solution is" <<  start<<" "<<end;
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