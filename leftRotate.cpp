//left Rotate optimized
#include<iostream>
using namespace std;
void leftRotate(int a[], int n, int k)
{
 for(int i=0; i<n; i++)
 { 
  cout<<a[(k%n+i)%n]<<" ";
 }
}
int main()
{
 int a[]= {2,4,7,9,12,14,23};
 int n= sizeof(a)/sizeof(a[0]);
 int k=3;
 leftRotate(a,n,k);
 return 0;
}
 
