#include<bits/stdc++.h>
using namesapce std;
#define n 4
void mergeK_array(int a[][n], int x, int Z[])
{
 int c=0;
 for(int i=0; i<x; i++)
 {
   for(int j=0; j<n; j++)
     Z[c++]= a[i][j];
 }
 sort( Z, Z+ n*x);
}
int main()
{
 int a[][n]= {{1,4,7,10},{2,5,9,15},{3,8,11,23}};
 int k= sizeof(a)/sizeof(a[0]);

int Z[n*k];
mergeKarray(a,3,Z);

for(int i=0; i< n*k; i++)
 cout<< Z[i]<<" ";
return 0;
}
