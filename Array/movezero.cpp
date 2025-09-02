#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6]={0,1,0,3,12,0};
  int n=sizeof(arr)-1;
  int start=0;
  int end=n;
  while(start<=end){
    if(arr[end]==0){
      end--;
    }
    else if(arr[start]>=0){
      swap(arr[start],arr[end]);
      start++;
      end--;
    }
    else{

    }
  }
}