//rearrange a[i]=i, using hashmap;

#include<bits/stdc++.h>

using namespace std;
void rearrange(int a[], int n)
{
 std::unordered_map<int, int>mp;
 for(int i=0;i<n;i++)
 {
   if(a[i]!=-1)
     mp[a[i]];
 }
 
  for(int i=0;i<n;i++)
  {
   if(mp.find(i)!=mp.end())
    {
     a[i]= i;
    }
   else
    {
     a[i]=-1;
    }
  }
 for(int i=0;i<n;i++)
 {
  cout<<a[i]<<" ";
 }
}

int main()
{
 int a[]= {-1,-1,6,2,9,-1,3,7,2,-1};
 int n= sizeof(a)/sizeof(a[0]);
 rearrange(a,n);
return 0;
}
