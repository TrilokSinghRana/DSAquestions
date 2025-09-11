#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int>arr={1,2,2,3,3};
  map<int,int>mp;
  for(auto x:arr){
   cout<<mp[x]++;
  }
  
    cout<<endl;

  for(auto &p:mp){
    cout<<p.first<<p.second<<endl;
  }

}