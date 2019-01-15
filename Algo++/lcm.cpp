#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n1,n2,n3,i,res;
  cin>>n1>>n2;
  n3 = max(n1,n2);
  for(i=n3;i<100000000;i++){
    if(i%n1==0 && i%n2==0){
      res = i;
      break;
    }
    else{
      continue;
    }
  }
  cout<<res;
	return 0;
}
