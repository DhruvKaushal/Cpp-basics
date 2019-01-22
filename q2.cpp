#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
	  int n,j;
	  cin>>n;
	  int a[n],b[n],k=0,maxi=-1;
	  for(j=0;j<n;j++)
	  {
	      cin>>a[j];
	  }
	  for(j=n-1;j>=0;j--)
	  {

	      if(a[j]>=maxi)
	      {
	        maxi=a[j];
	        b[k]=maxi;
	        k++;
	      }
	  }

	for(int j=k-1;j>=0;j--)
	{
	    cout<<b[j]<<" ";
	}
	cout<<endl;
	}
return 0;
}
