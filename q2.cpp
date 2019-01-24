#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
};

struct node *insert(node *x, int d){
	struct node *temp = (struct node*)malloc(sizeof(node));
	temp->data = d;
	temp->next = NULL;
	if(x==NULL){
		x = temp;
	}
	else{
		node *y = x;
		while(y->next!=NULL){
			y=y->next;
		}
		y->next = temp;
	}
	return x;
}

struct node *printLL(node *x){
	if(x==NULL){
		cout<<"empty";
	}
	else{
		struct node *temp = x;
		while(x!=NULL){
			cout<<x->data<<"-->";
			x=x->next;
		}
	}
}

int main(){
	node *head = NULL;
	head = insert(head, 2);
	head = insert(head, 3);
	head = insert(head, 4);
	printLL(head);
	return 0;
}
