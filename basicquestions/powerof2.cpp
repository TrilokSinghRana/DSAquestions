#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num=45;
  if(num<1){
   return 0;
  }
  while(num!=0){
    if(num%2==1){
      return 0;
    }
    num/=2;
  }
  return 1;
}