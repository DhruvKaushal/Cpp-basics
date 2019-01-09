#include<bits/stdc++.h>
using namespace std;
struct node{
  int data;
  node *left;
  node *right;
};

struct node *newNode(int item){
  struct node *Node = (struct node*)malloc(sizeof(struct node));
  Node->left = NULL;
  Node->right = NULL;
  Node->data = item;
  return Node;
}

struct node* insertnode(node *Node, int key){
  if(Node==NULL){
    return newNode(key);
  }
  if(key<Node->data){
    Node->left = insertnode(Node->left,key);
  }
  else if(key>Node->data){
    Node->right = insertnode(Node->right, key);
  }
  else{
    return Node;
  }
}

void inorder(struct node *temp){
  if(temp!=NULL){
    inorder(temp->left);
    cout<<temp->data<<" ";
    inorder(temp->right);
  }
}

int countele(node *temp){
  if(temp==NULL){
    return 0;
  }
  return (1 + countele(temp->left) + countele(temp->right));
}
int sumof(node *temp){
  if(temp==NULL){
    return 0;
  }
  return temp->data + sumof(temp->left) + sumof(temp->right);
}

int diameter(node *temp){
  if(temp==NULL){
    return 0;
  }
  if(temp->right==NULL && temp->left==NULL){
    return 1;
  }
  if(temp->right!=NULL && temp->left!=NULL){
      return 1 + diameter(temp->right) + diameter(temp->left);
  }
  if(temp->left==NULL){
    return 1+diameter(temp->right);
  }
  if(temp->right==NULL){
    return 1+diameter(temp->left);
  }
}

int main(){
  struct node *root = NULL;
  root = insertnode(root, 16);
  int x;
  for(int i=0;i<7;i++){
    cin>>x;
    insertnode(root,x);
  }
  inorder(root);
  cout<<countele(root)<<endl;
  cout<<sumof(root)<<endl;
  cout<<diameter(root);
  return 0;
}
