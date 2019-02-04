#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){
    int n, shield=0;
    cin>>n;
    int def[n], att[n];
    for(int i=0;i<n;i++){
      cin>>att[i];
    }
    for(int i=0;i<n;i++){
      cin>>def[i];
    }
    int i=0;
    while(i<n){
      if(i==0){
        if((def[0]>(att[1]) || def[0]>att[n-1]) && def[0]>(att[1]+att[n-1])){
          shield = def[0];
        }
      }
      if(i==n-1){
        if((def[n-1]>(att[0]) || def[n-1]>att[n-2]) && def[n-1]>(att[0]+att[n-2])){
          if(def[n-1]>shield){
            shield = def[n-1];
          }
        }
      }
      else{
        if((def[i]>(att[i-1]) || def[i]>att[i+1]) && def[n-1]>(att[i-1]+att[i+1])){
          if(def[i]>shield){
            shield = def[i];
          }
        }
      }
      i++;
    }
    if(shield==0){
      cout<<"-1"<<endl;
    }
    else{
      cout<<shield<<endl;
    }
    t--;
  }
  return 0;
}
