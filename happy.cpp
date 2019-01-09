#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n,flag=0;
    cin>>n;
    int a[n];
    for(int i=1;i<=n;i++){
      cin>>a[i];
    }
    if(n==1 && a[1]==1){
      flag=1;
      break;
    }

    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        if(i!=j){
          if(a[i]!=a[j] && a[a[i]]==a[a[j]]){
            flag=1;
            break;
          }
        }
      }
    }
    if(flag==1){
      cout<<"Truly Happy"<<endl;
    }
    else if(flag==0){
      cout<<"Poor Chef"<<endl;
    }
    t--;
  }
  return 0;
}
