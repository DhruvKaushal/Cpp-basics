#include<cstring>
#include<iostream>
using namespace std;
int main(){
  char str[] = "hello there, wassup";
  char *ptr;
  ptr = strtok(str, " ");
  while(ptr!=NULL){
    cout<<ptr<<endl;
    ptr = strtok(NULL, " ");
  }
  return 0;
}
