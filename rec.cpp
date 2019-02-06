#include<iostream>
using namespace std;
int fibo(int a, int b){
  if(b==1){
    return a;
  }
  return a*fibo(a,b-1);
}
int main(){
  int a,b;
  cin>>a>>b;
  cout<<fibo(a,b);
  return 0;
}
