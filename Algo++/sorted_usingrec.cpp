#include<bits/stdc++.h>
using namespace std;
int seesor(int b[], int n){
  if(n==0 || n==1){
    return 1;
  }
  if(b[n-1]<b[n-2]){
    return 0;
  }
  return seesor(b,n-1);
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=1;i<=n;i++){
    cin>>a[i];
  }
  int c = seesor(a,n);
  if(c==1){
    cout<<"true";
  }
  else if(c==0){
    cout<<"false";
  }
  return 0;
}
