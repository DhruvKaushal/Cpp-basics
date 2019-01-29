#include<bits/stdc++.h>
using namespace std;
// int calcR(int n, int m){              //using recursion
//   if(n==1 || m==1){
//     return 1;
//   }
//   return calcR(n-1,m) + calcR(n,m-1);
// }

int calcR(int n, int m){
  int a[n][m];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      a[i][j] = -1;
    }
  }
  for(int i=0;i<n;i++){
    a[i][0]=1;
  }
  for(int i=0;i<m;i++){
    a[0][i]=1;
  }
  for(int i=1;i<n;i++){
    for(int j=1;j<m;j++){
      a[i][j] = a[i-1][j] + a[i][j-1];
    }
  }
  return a[n-1][m-1];
}
int main(){
  int t;
  cin>>t;
  while(t){
    int n,m,x;
    cin>>n>>m;
    x = calcR(n,m);
    cout<<x<<endl;
    t--;
  }
  return 0;
}
