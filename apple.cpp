#include<bits/stdc++.h>
using namespace std;
//
//
//
// void rightshift(int arr[], int n){
//   int x;
//   arr[n-1] = x;
//   for(int i=n-1;i>0;i--){
//     arr[i]=arr[i-1];
//   }
//   arr[0] = x;
// }
//
// void calc(int arr[], int n, int k){
//   int count = 0; //intitialize count
//     int result = 0; //initialize max
//
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == 0)
//             count = 0;
//         else
//         {
//             count++;
//             if(count<=k){
//               result = max(result, count);
//             }
//         }
//     }
//     cout<<result<<endl;
// }

int main(){
  int n,q,k;
  cin>>n>>q>>k;
  int a[n];
  char s[q];

  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<q;i++){
    cin>>s[i];
  }

  for(int j=0;s[j]!='\0';j++){
    if(s[j]=='!'){
      int x;
      a[n-1] = x;
      for(int i=n-1;i>0;i--){
        a[i]=a[i-1];
      }
      a[0] = x;
    }
    else if(s[j]=='?'){
        int count = 0; //intitialize count
        int result = 0; //initialize max

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
                count = 0;
            else
            {
                count++;
                if(count<=k){
                  result = max(result, count);
                }
            }
        }
        cout<<result<<endl;
    }
  }
  return 0;
}
