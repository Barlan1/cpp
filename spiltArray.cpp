//split array
#include<iostream>
using namespace std;
void splitArray(int a[], int n, int k);

int main()
{
 int a[]= {3,7,12,45,13,15,10};
 int n= sizeof(a)/sizeof(a[0]);
 int k=2;
 splitArray(a,n,k);
return 0;
}
void splitArray(int a[], int n, int k)
{
 for(int j=0; j<k;j++)
  {
    int x= a[0];
    for(int i=0; i<n-1;i++)
     {
       a[i]=a[i+1];
     }
     a[n-1]=x;
  }
 for(int i=0;i<=n-1;i++)
  cout<<a[i]<<" ";
 cout<<endl;
}
