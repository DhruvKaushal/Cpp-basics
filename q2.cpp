#include <bits/stdc++.h>
using namespace std;
int larg(int x[], int y[], int z){
	int j=0;
	while(x[j]<=y[z]){
		j++;
	}
	return x[j];
}
int main() {
	int t;
  cin>>t;
  while(t){
    int n;
    cin>>n;
    int a[n], b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i] = a[i];
		}
		sort(b,b+n);
		int maxi = b[n-1];
		for(int i=0;i<n;i++){
			if(a[i]==maxi){
				cout<<"-1"<<" ";
			}
			else if (a[i]!=maxi){
				int next = larg(b, a, i);
				cout<<next<<" ";
			}
		}
    t--;
  }
	return 0;
}
