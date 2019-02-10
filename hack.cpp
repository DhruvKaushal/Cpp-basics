#include<bits/stdc++.h>
using namespace std;
int main(){
  int i,j,k,c=0;
  cin>>i>>j>>k;
  for(int l=i;l<=j;l++){
    int n=l;
    int count = 0;
    while (n != 0) {
        n = n / 10;
        ++count;
    }
    n =l;
    int z=0,v=1;
    while(n){
      int x = n%10,w=pow(10,count-v);
      z = z+x*w;
      n=n/10;
      v++;
    }
    if(abs(l-z)%k==0){
      c++;
    }
  }
  cout<<c;
  return 0;
}
