#include<iostream>
#include<cmath>
using namespace std;
int main(){
  long n,x=0,toggle;
  cin>>n;
  long a[n];
  for(int i=0;i<n;i++){
    cin>>a[n];
  }
  for(int i=0;i<n-1;i++){
    if(a[i]<a[i+1]){
      toggle=i;
      x++;
      break;
    }
  }
  for(int i=toggle+1;i<n-1;i++){
    if(a[i]>a[i+1]){
      x++;
      break;
    }
  }
  if(x==1){
    cout<<"true";
  }
  else{
    cout<<"false";
  }
  return 0;
}
