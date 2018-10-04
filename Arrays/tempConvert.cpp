#include<iostream>
#include<cstring>
using namespace std;
int main(){
  int mintemp, maxtemp, step;
  cin>>mintemp>>maxtemp>>step;
  for(int i=mintemp;i<=maxtemp;i=i+step){
    int c = (5*(i-32))/9;
    cout<<i<<" "<<c<<endl;
  }
  return 0;
}
