#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr={1,2,3,2,4,5,1};
  unordered_set<int>seen;
  unordered_set<int>dup;
  for(int x:arr){
    if(seen.count(x)){
       dup.insert(x);
    }
    seen.insert(x);
  }
  if(dup.empty()){
    cout<<"not dupliate";
  }
  else{
    cout<<"duplicate";
  }
}