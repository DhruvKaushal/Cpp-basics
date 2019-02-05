#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n;
    cin>>n;
    int x=0;
    while(n>0){
      if(n&1==1){
        x++;
      }
      n=n>>1;
    }
    cout<<x<<endl;
    t--;
  }
  return 0;
}
