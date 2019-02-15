#include<bits/stdc++.h>
using namespace std;
int memo[1000][1000];
int maxprofit(int b[], int start, int end, int x){
  if(start>end){
    return 0;
  }
  if(memo[start][end]!=-1){
    return memo[start][end];
  }
  int q1=x*b[start] + maxprofit(b,start+1,end,x+1);
  int q2=x*b[end] + maxprofit(b,start,end-1,x+1);
  memo[start][end] = max(q1,q2);
  return memo[start][end];
}



int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  memset(memo, -1, sizeof(memo));
  int start=0,end=n-1,x=1;
  int ans = maxprofit(a,start,end,x);
  cout<<ans;
  return 0;
}
