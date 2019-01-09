#include<iostream>
using namespace std;
int main(){
  char ch;
  int n1,n2;
  do{

    cin>>ch;
    if(ch=='+'){
      cin>>n1>>n2;
      cout<<n1+n2;
    }
    else if(ch=='-'){
      cin>>n1>>n2;
      cout<<n1-n2;
    }
    else if(ch=='*'){
      cin>>n1>>n2;
      cout<<n1*n2;
    }
    else if(ch=='/'){
      cin>>n1>>n2;
      cout<<n1/n2;
    }
    else if(ch=='%'){
      cin>>n1>>n2;
      cout<<n1%n2;
    }
    else if(ch=='x' || ch=='X'){
      return 0;
    }
    else{
      cout<<"Invalid operation. Try again.";
    }
  }while( ch != 'X' || ch!='x');
  return 0;
}
