#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  int top=-1, flag=0;
  char a[100];
  for(int i=0;i<s.length();i++){
    if(s[i]=='(' || s[i]=='[' || s[i]=='{'){
      top++;
      a[top] = s[i];
    }
    else if(s[i]==')' && a[top]=='(' && top!=-1){
      a[top]=0;
      top--;
    }
    else if(s[i]==']' && a[top]=='[' && top!=-1){
      a[top]=0;
      top--;
    }
    else if(s[i]=='}' && a[top]=='{' && top!=-1){
      a[top]=0;
      top--;
    }
    else if(s[i]==')' || s[i]==']' || s[i]=='}' && top==-1){
      flag=1;
      break;
    }
  }
  if(a[top]!=0){
    flag=1;
  }
  if(flag==0){
    cout<<"balanced";
  }
  if(flag==1){
    cout<<"not bal";
  }
  return 0;
}
