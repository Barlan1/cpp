// 
#include<iostream>
using namespace std;
int main()
{
int i, n;
cout<<"the number";
cin>>n;
if( n<=1)
 return n;
if (n>1)
 return n*fact(n-1);
return 0;
}
