#include<iostream>
using namespace std;
int main(){
  int n1,n2;
  cin>>n1>>n2;
  for(int i=n1;i<=n2;i++){
    int x, n=i,y,sum=0, flag=0;
    y=i;
    while(n){
      x=n%10;
      sum=sum+x*x*x;
      n=n/10;
    }
    if(sum==y){
      flag=1;
    }
    if(flag==1){
      cout<<y<<endl;
    }
  }

  return 0;
}
