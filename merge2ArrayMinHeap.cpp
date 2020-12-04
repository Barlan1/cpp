// merge two sorted array using min heap
#include<bits/stdc++.h>
using namespace std;
void minheapify( int b[], int i, int N)
{
 int min= i;
 int left = 2*i+1;
 int right= 2*i+2;
 if(left < N && b[left] < b[min])
   min= left;
 if(right < N && b[right] < b[min])
   min= right;
 if(min !=i)
  {  
    swap(b[i], b[min]);
    minheapify( b, min, N);
  }
}

void merge( int a[], int b[], int M, int N)
{
 for(int i=0; i<M; i++)
 {
  if( a[i] > b[0])
  {
   swap( a[i], b[0]);
   minheapify(b, 0, N);
  }
 }
 sort( b, b+N);
}
void printArr( int x[], int n)
{
 for( int i=0; i<n;i++)
  cout<<x[i]<<" ";
}
int main()
{
 int a[]= { 2, 4,15,25,46,577};
 int b[]= {3, 7,9};
 int m= sizeof(a)/sizeof(a[0]);
 int n= sizeof(b)/sizeof(b[0]); 
 merge(a,b,m,n);
 printArr( a,m);
 printArr( b,n);
 return 0;
}
