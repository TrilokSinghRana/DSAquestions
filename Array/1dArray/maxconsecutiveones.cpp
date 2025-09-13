 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
  int arr[6]={1,1,0,1,1,1};
  int max_count=0;
  int curr_count=0;
  for(int i=0;i<6;i++){
    if(arr[i]==1){
      curr_count++;
     max_count=max(max_count,curr_count);
    }
    else{
      curr_count=0;
    }
  }
  cout<<max_count;
 }