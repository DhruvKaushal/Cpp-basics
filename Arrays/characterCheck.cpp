#include<iostream>
using namespace std;
int main(){
  char ch;
  cin>>ch;
  if(islower(ch)){
    cout<<"lowercase";
  }
  else if(isupper(ch)){
    cout<<"UPPERCASE";
  }
  else if(!isalpha(ch)){
    cout<<"Invalid";
  }
  return 0;
}
