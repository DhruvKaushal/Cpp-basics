#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n;
    cin>>n;
    int a[n],b[n],m=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    sort(a,a+n);
    b[0]=1;
    for(int i=1;i<n;i++){
      if((a[i]-a[i-1])==1){
        b[i] = b[i-1] + 1;
      }
      else{
        b[i] = 1;
      }
    }
    for(int i=0;i<n;i++){
      cout<<b[i]<<" ";
    }
    for(int i=0;i<n;i++){
      if(m<b[i]){
        m=b[i];
      }
    }
    cout<<m<<endl;
    t--;
  }
  return 0;
}
