#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="255.100.25.60";
  string ans;
  for(int i=0;i<s.size();i++){
    if(s[i]=='.'){
      ans=ans+"[.]";
    }
    else{
      ans=ans+s[i];
    }
  }
  cout<<ans;
  return 0;
}