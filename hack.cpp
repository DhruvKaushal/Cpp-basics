#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int st=0,en=s.length()-1;
  int x = calcR(s,st,en);
  if(x==0){
    cout<<"false";
  }
  else{
    cout<<"true";
  }
  return 0;
}
