#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={6,1,2,8,4};
  int largest=INT_MIN;
  for(int i=0;i<5;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  int secondlargest=INT_MIN;
  for(int i=0;i<5;i++){
    if(arr[i]!=largest){
      if(arr[i]>secondlargest){
        secondlargest=arr[i];
      }
    }
  }
  cout<<secondlargest;
}