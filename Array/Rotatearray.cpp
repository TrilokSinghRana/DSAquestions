#include <bits/stdc++.h>
using namespace std;
int main()
{
 vector<int>arr={1,2,3,4,5,6,7};
  int k=3;
  k=k%7;
  reverse(arr.begin(),arr.end());
  reverse(arr.begin(),arr.begin()+k);
  reverse(arr.begin()+k,arr.end());

  for(auto it:arr){
    cout<<it;
  }
}