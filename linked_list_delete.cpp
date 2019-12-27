// program to delete element //  for practice only

#include<bits/stdc++.h>
using namespace std;
class Node {
 public:
   int data;
   Node* next;
};
void push( Node** head_ptr, int new_element)
{
 Node* new_Node = new Node();
 new_Node->data = new_element;
 new_Node->next = *head_ptr;
 *head_ptr = new_Node;
 }
 void deleteNode( Node** head_ptr, int key)
 {
  Node* temp = *head_ptr;
  Node* prev = NULL;
  if( temp != NULL && temp->data == key)
   {
    *head_ptr = temp->next;
    delete temp;
    return;
   } 
  while( temp !=NULL && temp->data != key)
  {
    prev = temp;
    temp = temp->next;
  
  }
  if( temp == NULL)
    return ;
 prev->next = temp->next;
 delete temp;
 }
void printList( Node* n)
{
  while( n != NULL)
  {
   cout<< n->data << " ";
   n = n->next;
  }
  cout<<endl;
} 
int main()
{
 Node* head = NULL;
 push(&head, 10);
 push(&head, 4);
 push(&head, 8);
 push(&head, 7);
 push(&head, 9);
 push(&head, 5);
 cout<<"the linked list is :\n";
 printList(head);
 deleteNode(&head, 7);
 cout<<"\nprint list after deleting node 7 : \n";
 printList(head);
 return 0;
 }
