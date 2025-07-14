#include <bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0;
    int num=19;
    int tans=0;

    while(num!=0){
        int rem=num%10;
        ans=ans+rem;
        num=num/10;
    }

    while(ans!=0){
        int rem=ans%10;
        tans=tans+rem;
        ans/=10;
    }
    cout<<tans;
 }
