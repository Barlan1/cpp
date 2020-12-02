//DP-3 longest increasing subsequence

#include<bits/stdc++.h>
using namespace std;

int lis( int a[], int n)
{
 int l[n]={1};
 for(int i=1;i<n;i++)
  {
    for(int j=0;j<i;j++)
     {
       if(a[i]>a[j] && l[i]< l[j]+1)
         l[i]=l[j]+1;
     }
 }   
 return *max_element(l, l+n);
}

int main()
{
 int a[]= { 10,22,9,33,21,50,41,60};
 int n= sizeof(a)/sizeof(a[0]);
 cout<<lis(a,n)<<endl;
 return 0;
}
