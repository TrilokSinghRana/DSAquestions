#include <bits/stdc++.h>
using namespace std;

   bool checkIfPangram(string &sentence) {
    int check=0;
        vector<bool>alpha(26,0);
        for(int i=0;i<sentence.size();i++){
           int index=sentence[i]-'a';
            alpha[index]=1;
        }
        for(int i=0;i<26;i++){
            if(alpha[i]==0){
                return 0;
            }
        }
      
    for (bool present : alpha) {
        if (!present) return false;
    }

    return true;
    }
int main(){
  string sentence="the quick brown fox jumps over the lazy dog";
  if (checkIfPangram(sentence)) {
        cout << "YES, it is a pangram.";
    } else {
        cout << "NO, it is not a pangram.";
    }
}