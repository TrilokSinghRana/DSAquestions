#include <bits/stdc++.h>
using namespace std;
int main()
{
  int matrix[4][4]={{3,6,9,17},{7,8,11,5},{9,3,2,1},{17,8,5,9}};
  int rows=4;
  int colums=4;
  for(int i=0;i<rows;i++){
    if(i%2==0){
      for(int j=0;j<colums;j++){
        cout<<matrix[j][i]<<" ";
      }
      cout<<" ";
    }
    else{
        for(int j=colums-1;j>=0;j--){
          cout<<matrix[j][i]<<" ";
        }
        cout<<" ";
      }
    }
  }
