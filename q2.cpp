#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
  cin>>t;
  while(t){
    int n;
    cin>>n;
    int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int low=0, mid=0, end=n-1;
		while(mid<=end){
			if(a[mid]==0){
				int temp=a[low];
				a[low]=a[mid];
				a[mid]=temp;
				mid++;
				low++;
			}

			else if(a[mid]==1){
				mid++;
			}
			else if(a[mid]==2){
				int temp=a[end];
				a[end]=a[mid];
				a[mid]=temp;
				end--;
			}
		}
		for(int i=0;i<n;i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
    t--;
  }
	return 0;
}
