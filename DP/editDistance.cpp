#include<bits/stdc++.h>
using namespace std;
int main(){
  string inp,out;
  cin>>inp>>out;
  int a[101][101];
  a[0][0] = 0;
  int n = inp.length();
  int m = out.length();
  for(int i=1;i<=n;i++){
    a[i][0] = a[i-1][0] + 1;
  }
  for(int j=1;j<=m;j++){
    a[0][j] = a[0][j-1] + 1;
  }
  for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
      int q1 = a[i-1][j-1];     //replace
      int q2 = a[i-1][j];       //delete
      int q3 = a[i][j-1];       //insert
      a[i][j] = min(q1, min(q2, q3)) + (inp[i-1]!=out[j-1]);
    }
  }
  cout<<a[n][m];
  return 0;
}
