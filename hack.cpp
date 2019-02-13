#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z,a,b,c;
  cin>>x>>y>>z;
  cin>>a>>b>>c;
  int sum=a+b+c;
  if(a<x){
    cout<<"NO";
    return 0;
  }
  int left=sum-x;
  if(left<(sum-c)){
    cout<<"NO";
    return 0;
  }
  left=sum-y;
  if(left<z){
    cout<<"NO";
  }
  else{
    cout<<"YES";
  }
  return 0;
}
