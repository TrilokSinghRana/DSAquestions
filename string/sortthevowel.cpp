#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="lEetcOde";
  vector<int>lower(26,0);
  vector<int>upper(26,0);
  // lower vector
  for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='i' ||  s[i]=='o' || s[i]=='u' )
    {
    lower[s[i]-'a']++;
    s[i]='#';
    }
 else if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U' )
    {
    upper[s[i]-'A']++;
     s[i]='#';
  }
}
  string vowel;
  for(int i=0;i<26;i++){
    char c='A'+i;
    while(upper[i]){
      vowel+=c;
      upper[i]--;
    }
  }
  for(int i=0;i<26;i++){
    char c='a'+i;
    while(lower[i]){
      vowel+=c;
      lower[i]--;
    }
  }
  int second=0;
  int first=0;
  while(second<vowel.size()){
    if(s[first]=='#'){
      s[first]=vowel[second];
      second++;
    }
    first++;
  }
  cout<<s;
}
