 #include <bits/stdc++.h>
 using namespace std;
 int main()
 {
  int matrix[4][4]={1,2,3,4,5,6,7,8,9,10,11,2,13,14,15,16};
  int rows=4;
  int column=4;
  for(int i=0;i<column;i++){
    for(int j=0;j<rows;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }
  cout<<"after 1st"<<endl;
   for(int i=0;i<column;i++){
      for(int j=i+1;j<rows;j++){
        swap(matrix[i][j],matrix[j][i]);
      }
      cout<<endl;
  }
  cout<<"after 90 degree rotaiton"<<endl;
  for(int i=0;i<rows;i++){
    int start=0;
    int end=3;
    while(start<end){
      swap(matrix[i][start],matrix[i][end]);
      start++;
      end--;
    }
  }
  cout<<"after all rotation"<<endl;
  for(int i=0;i<column;i++){
    for(int j=0;j<rows;j++){
      cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
  }

 }