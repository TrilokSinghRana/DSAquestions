#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,1,7,6,14,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(arr[i]>arr[j]){
          swap(arr[i],arr[j]);
        }
      }
    }
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
}