#include <bits/stdc++.h>
using namespace std;
int main() {
	long t;
	cin>>t;
	while(t){
		long n;
		cin>>n;
		long first = 1, second =1;
		if(n==1){
			cout<<"1";
			return 0;
		}
		else{
			cout<<first<<" "<<second<<" ";
			for(long i=0;i<n-2;i++){
				long long third=first+second;
				cout<<third<<" ";
				first = second;
				second = third;
			}
		}
		t--;
	}

	return 0;
}
