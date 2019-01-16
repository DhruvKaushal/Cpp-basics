#include <bits/stdc++.h>
using namespace std;
int tilesc(int n, int m){
	if(n==1){
		return 1;
	}
	if(m==1){
		return n;
	}
	if(n==m){
		return n;
	}
	return tilesc(n-1,m) + tilesc(n-m,m);
}
int main() {
	int t;
	cin>>t;
	while(t){
		int n,m,count;
		cin>>n>>m;
		count = tilesc(n,m);
		cout<<count<<endl;
		t--;
	}
	return 0;
}
