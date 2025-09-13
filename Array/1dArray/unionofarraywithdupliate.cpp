#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a={1,1,2,4,5,2};
    vector<int>b={2,4,1,3,6,9};
    set<int>ans;
     for(int num:a){
         ans.insert(num);
     }
     for(int num:b){
         ans.insert(num);
     }
     for(int i:ans){
      cout<<i;
     }
     return 0;
}