#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin>>t;
  while(t){
    int n,m;
    cin>>n>>m;
    int a[n],flag=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int range = (1<<n) - 1;

    for(int i=0;i<=range;i++){
      int x=0,y=i,sum=0;
      while(y>0){
        if(y&1==1){
          sum=sum+a[x];
        }
        x++;
        y=y>>1;
      }
      if(sum==m){
        flag=1;
        break;
      }
    }
    if(flag==1){
      cout<<"Yes"<<endl;
    }
    else if(flag==0){
      cout<<"No"<<endl;
    }
    t--;
  }
  return 0;
}
