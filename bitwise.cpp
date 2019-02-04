#include <bits/stdc++.h>
using namespace std;
// Given N, find the no set bits (No of 1's in binary represenation)
// Bitwise Operators !
int main() {
  int a,b;
  cin>>a>>b;
  a=a^b;
  b=b^a;
  a=a^b;
  cout<<a<<" "<<b;
  return 0;
}
