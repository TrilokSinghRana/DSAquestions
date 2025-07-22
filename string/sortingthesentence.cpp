#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s="is2 sentence4 this1 a3";
  vector<string>ans(10);
  string temp;
  int count=0;
  int index=0;
  while(s[index]<s.size()){
    if(s[index]==' '){
        int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;

    }
    else{
     temp+=s[index];
    } 
  }
   int pos=temp[temp.size()-1]-'0';
        temp.pop_back();
        ans[pos]=temp;
        temp.clear();
        count++;
      
   for(int i=1;i<=count;i++){
       temp+=ans[i];
       temp+=' ';
   }
   temp.pop_back();
   for(int i=0;i<temp.size();i++){
    cout<<temp[i];
   }

}