#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t){
    int n,m,mod=pow(10,9)+7;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
      a[0][i]=1;
      a[i][0]=1;
    }
    for(int i=1;i<n;i++){
      for(int j=1;j<m;j++){
        a[i][j] = (a[i-1][j] + a[i][j-1])%mod;
      }
    }
    cout<<a[n-1][m-1]<<endl;
    t--;
  }
  return 0;
}
