
//0(n) time complexity 

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6]={2,3,4,7,11,12};
  int k=5;
  int num=1;
  int i=0;
  int n=5;
  while(i<n && k>0){
    if(arr[i]==num){
      i++;
    }
    else{
      k--;
    }
    num++;
  }
  while(k--){
    num++;
  }
  cout<<num-1;
}