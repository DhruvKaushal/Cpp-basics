#include<bits/stdc++.h>
using namespace std;
const int inf = (int)1e9;
int reduceno(int n){
  if(n==1){
    return 0;
  }
  int q1=inf,q2=inf,q3=inf;
  if(n%3==0){
    q1=1+reduceno(n/3);
  }
  if(n%2==0){
    q2 = 1+reduceno(n/2);
  }
  q3= 1+reduceno(n-1);
  return min(q1, min(q2,q3));
}
int reducenoDP(int n){
  int dp[1000];
  for(int i=0;i<=1000;i++){
    dp[i]=-1;
  }
  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;
  for(int i=3;i<=n;n++){
    if(i%2==0){
      dp[i] = 1 + dp[i/2];
    }

    else{
      dp[i] = 1+dp[i-1];
    }
  }
  return dp[n];
}
int main(){
  int n;
  cin>>n;
//  int ans = reduceno(n);
  int ans2=reducenoDP(n);

  cout<<ans2;
  return 0;
}
