#include <bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n,k,count=0;
    cin>>n;
    n=(n<<4)|(n>>4);
    int a = (int)(n.to_ulong());
    cout<<a<<endl;
    t--;
  }
  return 0;
}
