#include<iostream>
using namespace std;
int main(){
  int n, max=0, sum=0;
  cout<<" enter n";
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
      sum = 0;
      for(int k=i;k<=j;k++){
        sum =sum+a[k];
        }
        if(max < sum){
          max = sum;
      }
    }
  }
  cout<<max;
  return 0;
}
