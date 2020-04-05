//level order traversal of a Binary tree
#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node *left, *right;
};
Node* newNode(int data)
{
	Node *root=new Node();
	root->data= data;
	root->left= root->right=NULL;
	return root;
}
int height(Node *root)
{
	if(root==NULL)
	return 0;
	return 1+max(height(root->left),height(root->right));
}
void printGivenLevel(Node* root, int level)
{
	if(root==NULL) return;
	if(level==1)
	 cout<<root->data<<" ";
	else if(level > 1)
	      printGivenLevel(root->left,level-1);
		  printGivenLevel(root->right,level-1);
}
void givenLevelOrder(Node* root)
{
	if(root==NULL) return;
	int h= height(root);
	for(int i=1; i<=h;i++)
	 printGivenLevel(root,i);
}

int main()
{
	Node* root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left= newNode(4);
	root->left->right= newNode(5);
	root->left->right->left=newNode(6);
	givenLevelOrder(root);
	return 0;
}
