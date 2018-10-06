#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
  int key;
  node *left;
  node *right;
  int height;
};

//calculate height of tree branch
int height(node *N){
  if(N==NULL){
    return 0;
  }
  return N->height;
}

//get balance of heights
int getbalance(struct node *n){
  if(n==NULL){
    return 0;
  }
  return (height(n->left) - height(n->right));
}

//Create new Node
struct node *newNode(int key){
  struct node *Node = (struct node*)malloc(sizeof(node));
  Node->left=NULL;
  Node->right=NULL;
  Node->key=key;
  Node->height = 1;
  return Node;
}

//right rotation
struct node *rightRotate(struct node *y){
    struct node *x = y->left;
    struct node *T2 = x->right;
    x->right = y;
    y->left = T2;

    // Update heights
    y->height = max(height(y->left), height(y->right))+1;
    x->height = max(height(x->left), height(x->right))+1;

    return x;
}

//left rotation
struct node *leftRotate(struct node *x){
    struct node *y = x->right;
    struct node *T2 = y->left;

    y->left = x;
    x->right = T2;

    //  Update heights
    x->height = max(height(x->left), height(x->right))+1;
    y->height = max(height(y->left), height(y->right))+1;

    return y;
}

//preorder traversal
void preorder(struct node *root){
  if(root!=NULL){
    cout<<root->key;
    preorder(root->left);
    preorder(root->right);
  }
}

struct node *insert(node *Node, int key){
  //Perform insertions
  if(Node==NULL){
    return (newNode(key));
  }
  if(key<Node->key){
    Node->left = insert(Node->left,key);
  }
  else if(key>Node->key){
    Node->right = insert(Node->right,key);
  }
  else{
    return Node;
  }
  //Update height of Node
  Node->height = 1 + max(height(Node->left), height(Node->right));

  //obtain balance factor
  int balance = getbalance(Node);
  //Operate for four possible cases
  //Left left case
  if(balance>1 && key<Node->left->key){
    return rightRotate(Node);
  }
  //right right case
  if(balance<-1 && key>Node->right->key){
    return leftRotate(Node);
  }
  //left of right case
  if(balance<-1 && key<Node->right->key){
    Node->right = rightRotate(Node->right);
    return leftRotate(Node);
  }
  //right of left case
  if(balance>1 && key>Node->left->key){
    Node->left = leftRotate(Node->left);
    return rightRotate(Node);
  }
  return Node;
}

int main(){
  struct node *root = NULL;
  root = insert(root, 10);
  root = insert(root, 14);
  root = insert(root, 15);
  root = insert(root, 80);
  root = insert(root, 20);
  root = insert(root, 30);
  preorder(root);
  return 0;
}
