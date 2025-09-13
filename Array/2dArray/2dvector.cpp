#include <bits/stdc++.h>
using namespace std;
int main()
{
  
  vector<vector<int>>matrix(3,vector<int>(4,1));
  int rows=matrix.size();
  int col=matrix[0].size();
   for(int i=0;i<rows;i++){
    for(int j=0;j<col;j++){
      cout<<matrix[i][j];
    }
    cout<<endl;
   }
}