#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
  cin>>num;
   int ans=0;
   int check=num;
   while(num<1){
    return 0;
   }
   while(num!=0){
    int rem=num%10;
    if(ans>INT_MAX/10){
      return 0;
    }
    ans=ans*10+rem;
    num/=2;
   }
   if(ans==check){
    return 1;
   }
 return 0;
}