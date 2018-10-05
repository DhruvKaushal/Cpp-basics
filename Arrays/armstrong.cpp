#include<iostream>
using namespace std;
int main(){
  long n, sum=0,x,y;
  cin>>n;
  int flag=0;
  y=n;
  while(n){
    x=n%10;
    sum=sum+x*x*x;
    n=n/10;
  }
  if(sum==y){
    flag=1;
  }
  if(flag==1){
    cout<<y;
  }
  return 0;
}
