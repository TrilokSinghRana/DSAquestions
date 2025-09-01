#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[5]={6,1,0,12,53};
  int largest=INT_MIN;
  for(int i=0;i<5;i++){
    if(arr[i]>largest){
      largest=arr[i];
    }
  }
  cout<<largest;
}