#include<iostream>
using namespace std;
int main(){
  int arr[5] = {1,2,3,4,5};
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      for(int k=j;k<=i;k++){
        cout<<arr[k]<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
