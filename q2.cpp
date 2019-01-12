#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
  cin>>t;
  while(t){
    int n,nos=0;
		cin>>n;
		for(int i=1;i<=n;i++){
			nos+=i*i;
		}
		cout<<nos<<endl;
    t--;
  }
	return 0;
}
