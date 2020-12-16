//recursive digit sum without concatenation part, hakerrank 
#include<iostream>
using namespace std;
int recSum(long long int sum);
int superDigit(long long int  n)
{
 long long int sum=0;
 while(n!=0)
 {
  sum+=n%10;
  n= n/10;
 }
 return recSum(sum);
}
int recSum(long long int sum)
{
 if(sum<10) 
  return sum;
 else
  return superDigit( sum);
}
int main()
{
 long long int a= 98759875987598755;
 cout<<recSum(a);
 return 0;
}
