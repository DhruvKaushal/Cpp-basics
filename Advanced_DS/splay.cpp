#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
  int key;
  node *left;
  node *right;
};

struct node * newNode(int k){
  struct node *Node = (struct node*)malloc(sizeof(node));
  Node->left=NULL;
  Node->right=NULL;
  Node->key=k;
  return Node;
}

struct node *rightRotate(struct node *x)
{
    struct node *y = x->left;
    x->left = y->right;
    y->right = x;
    return y;
}

struct node *leftRotate(struct node *x)
{
    struct node *y = x->right;
    x->right = y->left;
    y->left = x;
    return y;
}

struct node *splay(struct node *root, int key){
  if(root==NULL || root->key==key){
    return root;
  }
  if(key<root->key){
    if(root->left==NULL){
      return root;
    }
    if(key<root->left->key){
      root->left->left = splay(root->left->left,key);
      root = rightRotate(root);
    }
    else if(key>root->left->key){
      root->left->right = splay(root->left->right, key);
      if(root->left->right!=NULL)
        root->left= leftRotate(root->left);
    }
    return (root->left==NULL)?root:rightRotate(root);
  }

  else{
    if(root->right==NULL){
      return root;
    }
    if(key>root->right->key){
      root->right->right = splay(root->right->right, key);
      root = leftRotate(root);
    }
    else if(key<root->right->key){
      root->right->left = splay(root->right->left, key);
      if(root->right->left!=NULL)
        root->right = rightRotate(root->right);
    }
    return (root->right==NULL)?root:leftRotate(root);
  }
}

struct node *insert(struct node *root, int k)
{

    if (root == NULL) return newNode(k);
    root = splay(root, k);

    if (root->key == k) return root;
    struct node *newnode  = newNode(k);

    if (root->key > k)
    {
        newnode->right = root;
        newnode->left = root->left;
        root->left = NULL;
    }
    else
    {
        newnode->left = root;
        newnode->right = root->right;
        root->right = NULL;
    }
    return newnode;
}

void preorder(struct node *root){
  if(root!=NULL){
    cout<<root->key<<" ";
    preorder(root->left);
    preorder(root->right);
  }
}

int main(){
  cout<<"enter data "<<endl;
  struct node *root = newNode(100);
   root->left = newNode(50);
   root->right = newNode(200);
   root->left->left = newNode(40);
   root->left->left->left = newNode(30);
   root->left->left->left->left = newNode(20);
   root = insert(root, 25);
   cout<<"The tree is";
   preorder(root);
   return 0;
}
