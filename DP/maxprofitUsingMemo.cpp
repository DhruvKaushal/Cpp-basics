#include<bits/stdc++.h>
using namespace std;
const int inf = (int)1e9;
int mem[100][100];
int maxprofit(int ar[], int st, int en, int year){        //max profit using memo
  if(st>en){
    return 0;
  }
  if(mem[st][en]!=-1){
    return mem[st][en];
  }
  int q1 = ar[st]*year + maxprofit(ar,st+1,en,year+1);
  int q2 = ar[en]*year + maxprofit(ar,st,en-1,year+1);
  int ans = max(q1,q2);
  mem[st][en] = ans;
  return ans;
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  memset(mem, -1, sizeof(mem));
  int an=maxprofit(a,0,n-1,1);
  cout<<an;
  return 0;
}
