#include<bits/stdc++.h>
using namespace std;
const int inf = INT_MAX;
int memos[1001];
int reduceno(int n){
  if(n==1){
    return 0;
  }
  if(memos[n]!=-1){
    return memos[n];
  }
  int q1=inf,q2=inf,q3=inf;
  if(n%3==0){
    q1=1+reduceno(n/3);
  }
  if(n%2==0){
    q2 = 1+reduceno(n/2);
  }
  q3= 1+reduceno(n-1);
  memos[n] = min(q1, min(q2,q3));
  return memos[n];
}

int main(){
  for(int i=0;i<=1000;i++){
    memos[i] = -1;
  }
  int ans = reduceno(10);
  cout<<ans;
  return 0;
}
