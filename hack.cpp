#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  long int n;
  cin>>n;
  long long int x = s.length();
  long long int a[x];
  if(s[0]=='a'){
    a[0]=1;
  }
  else{
    a[0]=0;
  }
  for(long long int j=1;j<x;j++){
    if(s[j]=='a'){
      a[j]=a[j-1]+1;
    }
    else{
      a[j]=a[j-1];
    }
  }
  if(a[x-1]==0){
    cout<<"0";
    return 0;
  }
  else if(n%x==0){
    cout<<a[x-1]*(n/x);
  }
  else{
    long long int z = n%x;
    cout<<(a[x-1]*(n/x))+a[z-1];
  }
  return 0;
}
