//program for pyramid, code  by neso academy youtube

#include<iostream>
using namespace std;
int main()
{
int i, j, n;
cout<<"insert size of pyramid \n";
cin>>n;

for(int i=1; i<=n; n++)
  {
    for(int j=1; j<= 2*n-1; j++)
    {
     if( i>= n-(i-1) && i<= n-(i-1))
     {
     cout<<"*";
     }
     else
     cout<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
   
