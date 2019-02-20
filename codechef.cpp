#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n,x=1;
    cin>>n;
    while(x<n){
      x=(x<<1);
    }
    cout<<x<<endl;
    t--;
  }
  return 0;
}
