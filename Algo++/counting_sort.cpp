#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int x=a[0];
  for(int i=1;i<n;i++){
    if(a[i]>x){
      x=a[i];
    }
  }
  //Initialize all elements with 0
  int b[x+1];
  for(int i=0;i<=x;i++){
    b[i]=0;
  }
  for(int i=0;i<n;i++){
    b[a[i]]++;
  }
  //Outputting the result
  for(int i=0;i<=x;i++){
    if(b[i]==0){
      continue;
    }
    else{
      while(b[i]>0){
        cout<<i<<" ";
        b[i]--;
      }
    }
  }
  return 0;
}
