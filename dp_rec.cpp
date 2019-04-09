#include<bits/stdc++.h>
using namespace std;
int mod = pow(10,9)+7;

int checkn(int n,int m){
  if(n>=1 && n<m){
    return 1;
  }
  if(n==m){
    return 2;
  }
  return checkn(n-1,m) + checkn(n-m,m);
}
int main(){
  int t;
  cin>>t;
  while(t){
    int n,m;
    cin>>n>>m;
    cout<<checkn(n,m)%mod;
    cout<<endl;
    t--;
  }
  return 0;
}
