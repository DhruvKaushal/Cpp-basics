#include <bits/stdc++.h>
using namespace std;
int main() {
	long long n1,n2,n3,i,res;
	cin>>n1>>n2;
	n3 = min(n1,n2);
	for(i=1;i<=n3;i++){
		if(n1%i==0 && n2%i==0){
			res = i;
		}
	}
	cout<<res;
	return 0;
}
