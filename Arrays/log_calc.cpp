#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long X, n;
  cin>>X;
  cin>>n;
  n=log10(X)/log10(n);
  cout<<n;
  return 0;
}
