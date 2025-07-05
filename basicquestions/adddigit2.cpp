#include <bits/stdc++.h>
using namespace std;
int main()
{

  while(num>9){
        int ans=0;

        while(num!=0){
          int rem=num%10;
          ans=ans+rem;
          num=num/10;
        }
        num=ans;
       } 
       return num;
}