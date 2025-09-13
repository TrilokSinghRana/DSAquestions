#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5]={1,2,3,4,5};
   int temp=arr[0];
   for(int i=1;i<5;i++){
     arr[i-1]=arr[i];
   } 
   arr[5-1]=temp;
   for(int i=0;i<5;i++){
     cout<<arr[i];
   }

}
// creating new vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int arr[5]={1,2,3,4,5};
   vector<int>ans(5);
   int temp=arr[0];
   for(int i=1;i<5;i++){
      ans[i-1]=arr[i];
   } 
   ans[5-1]=temp;
   for(auto it:ans){
    cout<<it;
   }
}

