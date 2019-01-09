#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t){

    int n, a[7]={4,4,4,4,4,4,4}; string s;
    cin>>n;
    cin>>s;
    if(n>28){
      n=n-28;
      if(n!=0){
        for(int i=0;i<n;i++){
          if(s=="mon"){
            a[0]++;
            s="tue";
            continue;
          }
          if(s=="tue"){
            a[1]++;
            s="wed";
            continue;
          }
          if(s=="wed"){
            a[2]++;
            s="thur";
            continue;
          }
          if(s=="thur"){
            a[3]++;
            s="fri";
            continue;
          }
          if(s=="fri"){
            a[4]++;
            s="sat";
            continue;
          }
          if(s=="sat"){
            a[5]++;
            s="sun";
            continue;
          }
          if(s=="sun"){
            a[6]++;
            s="mon";
            continue;
          }
        }
      }
      for(int i=0;i<7;i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
    }


    t--;
  }
  return 0;
}
