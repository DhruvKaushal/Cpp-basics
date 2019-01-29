#include<iostream>
using namespace std;
int calcR(int n, int m){
  if(n==1 || m==1){
    return 1;
  }

  return calcR(n-1,m) + calcR(n,m-1);
}
int main(){
  int t;
  cin>>t;
  while(t){
    int n,m,x;
    cin>>n>>m;
    x = calcR(n,m);
    cout<<x<<endl;
    t--;
  }
  return 0;
}
