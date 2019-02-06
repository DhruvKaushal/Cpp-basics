#include<bits/stdc++.h>
using namespace std;
int main(){

  int t;
  cin>>t;
  while(t){
    int l,r;
    cin>>l>>r;
    int count=0;
    for(int i=l;i<=r;i++){
      int x=i;
      if(i==0){
        continue;
      }
      else if(i<0){
        x=(~x)+1;
        while(x>0){
          if((x&1)==1){
            count++;
          }
          x=(x>>1);
        }
        count=32-count;
      }
      else if(i>0){
        while(x>0){
          if((x&1)==1){
            count++;
          }
          x=(x>>1);
        }
      }

    }
    cout<<count<<endl;
    t--;
  }
  return 0;
}
