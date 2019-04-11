#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *next;
};
node *head1 = NULL;
node *head2 = NULL;
node *head3=NULL;
// void insertathead(node *h, int d){
//   node *temp = new node();
//   temp->data  = d;
//   temp->next = NULL;
//   temp->next = h;
//   head = temp;
// }
void insertatend(node *&h, int d){
  node *temp = new node();
  temp->data=d;
  temp->next=NULL;
  if(h==NULL){
    h = temp;
  }
  else{
    node *x = h;
    while(x->next!=NULL){
      x=x->next;
    }
    x->next = temp;
  }
}
void printnodes(node *h){
  if(h==NULL){
    cout<<"empty list";
  }
  else{
    node *x = h;
    while(x!=NULL){
      cout<<x->data<<" ";
      x = x->next;
    }
  }
}

node *merge(node *a, node *b){              //merge 2 sorted LL
  if(a==NULL){
    return b;
  }
  else if(b==NULL){
    return a;
  }
  node *c;
  if(a->data>b->data){
    c = b;
    c->next =  merge(a, b->next);
  }
  else if(a->data<b->data){
    c = a;
    c->next = merge(a->next, b);
  }
  return c;
}

int main(){
  int t,x;
  cin>>t;
  while(t){
    int n1,n2;
    cin>>n1;
    for(int i=0;i<n1;i++){
      cin>>x;
      insertatend(head1, x);
    }
    cin>>n2;
    for(int i=0;i<n2;i++){
      cin>>x;
      insertatend(head2, x);
    }
    head3 = merge(head1, head2);
    printnodes(head3);
    cout<<endl;
    t--;
  }

  return 0;
}
