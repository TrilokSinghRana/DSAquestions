#include <bits/stdc++.h>
using namespace std;
int main()
{
  int minprice=INT_MAX;
  int maxprice=0;
  int prices[6]={7,1,5,3,6,4};
  for(int i=0;i<6;i++){
    minprice=min(minprice,prices[i]);
    maxprice=max(maxprice,prices[i]-minprice);
  }
   cout<< maxprice;
}