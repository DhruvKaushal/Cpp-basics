#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int a,b,c=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
      int x=0;
      x=__builtin_popcount(i);
      c+=x;
    }
    cout<<c<<endl;
    t--;
  }
  return 0;
}
