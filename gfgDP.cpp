#include <bits/stdc++.h>
using namespace std;
int findLongestConseqSubseq(int [], int );
int main() {
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		cin>>n;

		int a[n];

		// input array elements
		for(int i=0;i<n;i++)
		    cin>>a[i];

		cout<< findLongestConseqSubseq(a, n)<<endl;

	}
	return 0;
}


/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/


// function to find longest consecutive subsequence
// n : size of array
// arr[] : input array
int findLongestConseqSubseq(int arr[], int n)
{
  int b[n];
  b[0] = 1;
  sort(arr,arr+n);
  for(int i=1;i<n;i++){
    if(arr[i]-arr[i-1]==1){
      b[i] = b[i-1]+1;
    }
    else if(arr[i]==arr[i-1]){
      b[i]=b[i-1];
    }
    else{
      b[i]=1;
    }
  }
  int m = 0;
  for(int i=0;i<n;i++){
    if(b[i]>m){
      m=b[i];
    }
  }
  return m;
    //Your code here
}
