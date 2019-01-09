#include<iostream>
using namespace std;
int main(){
  long n, max=0;
  cin>>n;
  long a[n];
  for(long i=0;i<n;i++){
    cin>>a[i];
  }
  max = a[0];
  for(long i=1;i<n;i++){
    if(a[i]>max){
      max=a[i];
    }
  }
  cout<<max;
  return 0;
}
