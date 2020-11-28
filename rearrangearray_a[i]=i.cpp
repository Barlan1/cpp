//rerarrange array a[i]= i;
#include<bits/stdc++.h>
using namespace std;
void rearrange(int a[], int n)
{
 for(int i=0;i<n; i++)
 {
  for( int j=0; j<n;j++)
  {
   if(a[j]==i)
   {
    int t= a[j];
     a[j]= a[i];
     a[i]= t;
     break;
   }
  }
 }
 for(int i=0;i<n;i++)
   if(a[i]!=i)
    a[i]= -1;
  
 for(int i=0;i<n;i++)
{
 cout<<a[i]<<" ";
}
} 
int main()
{
 int a[]= {-1, -1, 6, 1, 9, 3, 2, -1, 4, -1 };
 int n= sizeof(a)/sizeof(a[0]);
 rearrange(a,n);
 return 0;
}
