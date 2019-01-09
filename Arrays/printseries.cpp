#include<iostream>
using namespace std;
int main(){
  int n1,n2, i=1;
  cin>>n1>>n2;
  while(n1){
    int n = 3*i + 2;
    if(n%n2!=0){
      cout<<n<<endl;
      n1--;
    }
    i++;
  }
  return 0;
}
