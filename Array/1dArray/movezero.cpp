#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6]={0,1,0,3,12,0};
  int n=6;
  int start=0;
  int end=n-1;
  int i=0;
  for(int j=0;j<n;j++){
    if(arr[j]!=0){
       swap(arr[j],arr[i]);
       i++;
    }
  }
  for(int j=0;j<n;j++){
    cout<<arr[j];
  }

}