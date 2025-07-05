#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num=199;
  int ans=0;
  while(num>9){
    while(num!=0){
       int rem=num%10;
        ans=ans+rem;
       num=num/10;
    }
  }
   num=ans;
  cout<< num;
}