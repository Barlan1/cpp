//level order using queue
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node* left, *right;
};
Node* newNode(int data)
{
	Node* root= new Node();
	root->data= data;
	root->left=root->right=NULL;
	return root;
}
void printLevel(Node* root)
{
	if(root==NULL) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty())
	{
		Node* root= q.front();
		cout<<root->data<< " ";
		q.pop();
		if(root->left)
		 q.push(root->left);
		if(root->right)
		 q.push(root->right); 
	}
}
int main()
{
	Node* root=newNode(9);
	root->left= newNode(2);
	root->left->right=newNode(3);
	root->left->right->left=newNode(4);
	root->left->right->left->left=newNode(5);
	root->left->right->left->left->right=newNode(6);
	printLevel(root);
	return 0;
}
