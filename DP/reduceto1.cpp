#include<bits/stdc++.h>
using namespace std;
const int inf = INT_MAX;
int reducenoDP(int n){
  int dp[1001];

  dp[0] = 0;
  dp[1] = 0;
  dp[2] = 1;
  dp[3] = 1;
  for(int i=4;i<=n;i++){
    int q1=inf,q2=inf,q3=inf;
    if(i%3==0){
      q1 = 1 + dp[i/3];
    }
    if(i%2==0){
      q2 = 1 + dp[i/2];
    }
    q3 = 1 + dp[i-1];
    dp[i] = min(q1,min(q2,q3));
  }
  return dp[n];
}
int main(){
  int n;
  cin>>n;
  int ans2=reducenoDP(n);
  cout<<ans2;
  return 0;
}
