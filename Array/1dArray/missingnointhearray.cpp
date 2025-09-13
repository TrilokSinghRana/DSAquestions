#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[4]={1,2,3,5};
  int sizeofarray=5;
  int n=sizeofarray*(sizeofarray+1)/2;
  int ans=0;
  for(int i=0;i<4;i++){
    ans=ans+arr[i];
  }
  cout<<n-ans;
}