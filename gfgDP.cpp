#include<bits/stdc++.h>
using namespace std;
int main(){


  for(int i=1;i<=15;i++){
    string s="";
    if(i%3==0){
      s+="Fizz";
    }
    if(i%5==0){
      s+="Buzz";
    }
    if(s==""){
      cout<<i<<endl;
    }
    else{
      cout<<s<<endl;
    }
  }
  return 0;
}
