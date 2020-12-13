//swap kth in lined-list from last and first
#include<bits/stdc++.h>
using namespace std;
struct node{
 int data;
 struct node* next;
};

void push(struct node **head_ref, int data)
{
 struct node* t=(struct node*)malloc(sizeof(struct node));
 t->data= data;
 t->next= (*head_ref);
 (*head_ref)= t;
}
void printlist(struct node* t)
{
 while(t!= NULL) 
 {
  cout<< t->data <<" ";
  t= t->next;
 }
 cout<<endl;
}
int count(struct node * t)
{
 int c=0;
 while( t!= NULL)
  {
    c++; 
    t= t->next;
  }
 return c;
}

void kthswap(struct node** head_ref, int k)
{
 int c= count(*head_ref);
 if(c < k) return;
 if(2*k -1 == c) return;
 
 node* x= *head_ref;
 node* xprev= NULL;
 for(int i=1; i < k; i++)
  { 
   xprev = x;
   x= x->next;
  }

 node* y= *head_ref;
 node* yprev=NULL;
 for( int i=1; i< c-k+1; i++)
   { yprev= y;
    y= y->next;
  }
if(xprev) 
  xprev->next= y;
if(yprev) 
  yprev->next= x;

node* t= x->next;
x->next= y->next;
y->next= t;

if(k==1)
   *head_ref= y;
if(k==c) 
   *head_ref= x;
}

int main()
{
 struct node* head= NULL;
  
 for( int x=8;x>= 1; x--)
  push(&head, x);

 printlist( head);
 kthswap( &head, 2);
 printlist(head);
return 0;
}
