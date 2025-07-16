#include <bits/stdc++.h>
using namespace std;
bool check(string &sentence)
{
    for(int i=97;i<=122;i++){
        bool found=false;

        for(int j=0;j<=122;j++){
            if(tolower(sentence[j]==char(i))){
            found=true;
            break;
        }
    }
    if(!found) return false;
    }
    return true;
 }
 int main()
 {
    string sentence="the quick brown fox jumps over the lazy dog";
    if(check(sentence)){
  cout<<"true";
    }
    else{
        cout<<"false";
    }

 }