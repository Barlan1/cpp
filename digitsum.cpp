//sum of digit of a number

#include<iostream>
using namespace std ;

int digitsum(int n)
{
 int sum;
 for(sum = 0; n>0; sum += n % 10,n /= 10);
 
 return sum;
}
int main()
{
 int n;
 cout<<"enter num\n";
 cin>>n;
 cout<<digitsum(n);
 return 0;
}
