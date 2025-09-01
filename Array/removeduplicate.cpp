// return new array with unique element and remove duplicate
#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[10]={0,0,1,1,1,2,2,3,3,4};
  int count=1;
  int i=0;
  for(int j=1;j<10;j++){
     if(arr[j]!=arr[i]){
      i++;
      arr[i]=arr[j];
     }
  }
  cout<<i+1;
}