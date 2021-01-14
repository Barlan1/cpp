//reverse array
// 
// {5,3,9,7,5,2}
#include<bits/stdc++.h>
using namespace std;
void reverseArray(int a[], int n)
{
 stack<int> s;
 for( int i=0;i<n;i++)
  {
   s.push(a[i]);
  }
 while(!s.empty())
 {
  cout<<s.top()<<" ";
  s.pop();
 }
}
int main()
{
 int a[]= {2,5,7,9,3,5};
 int n= sizeof(a)/sizeof(a[0]);
 reverseArray(a,n);
 return 0;
 }
 
