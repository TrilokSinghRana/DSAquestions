#include <bits/stdc++.h>
using namespace std;
int main()
{
  string ans="";
  int sum=0,carry=0;
  string num1="26583";
  string num2="698";
  int index1=num1.size()-1;
  int index2=num2.size()-1;
  while(index2>=0){
    sum=num1[index1]-'0'+num2[index2]-'0'+carry;
    carry=sum/10;
    char c=sum%10+'0';
    ans+=c;
    index2--;
    index1--;
  }
  while(index1>=0){
    sum=num1[index1]-'0'+carry;
    carry=sum/10;
    char c='0'+sum%10;
    ans+=c;
    index1--;
  }
  if(carry){
    ans+='1';
  }
  reverse(ans.begin(),ans.end());
  cout<<ans;
}