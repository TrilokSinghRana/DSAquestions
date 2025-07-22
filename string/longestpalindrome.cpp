#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="aabbcbadad";
  int count=0;
  bool odd=0;
  vector<int>lower_bound(26,0);
  vector<int>upper_bound(26,0);
  for(int i=0;i<s.size();i++){
     lower_bound[s[i]-'a']++;
  }
  for(int i=0;i<s.size();i++){
    upper_bound[s[i]-'A']++;
  }
  for(int i=0;i<26;i++){
    if(lower_bound[i]%2==0){
      count+=lower_bound[i];
    }
    else{
      count+=lower_bound[i]-1;
      odd=1;
    }
    if(upper_bound[i]%2==0){
      count+=upper_bound[i];
    }
     else{
      count+=upper_bound[i]-1;
      odd=1;
    }

  }
  cout<<count+odd;
  
}