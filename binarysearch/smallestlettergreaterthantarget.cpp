#include <bits/stdc++.h>
using namespace std;
int main()
{
  int letters[4]={'a','c','d','z'};
  int target='b';
  int n=3;
  int start=0;
  int end=3;
  while (start<=end)
  {
    int mid=end+(start-end)/2;
    if(letters[mid]>target){
       end=mid-1;
    }
    else{
      start=mid+1;
    }
  }
  cout<<letters[start%n];
}