//split array 2 O(n) solution
#include<iostream>
using namespace std;
void splitArrayEfficient(int a[], int length, int k)
{
 int t[2*length]={0};
 for(int i=0;i<length;i++)
  {
   t[i]= a[i];
   t[i+length]= a[i];
  }
 for(int i=k;i<k+length;i++)
 {
  a[i-k]=t[i];
 }
}
int main()
{
 int a[]= {4,7,12,-1,3,34};
 int length= sizeof(a)/sizeof(a[0]);
 int position= 3;
 splitArrayEfficient(a, length, position);
 for(int i=0;i<length;i++)
  cout<<a[i]<<" ";
return 0;
}
