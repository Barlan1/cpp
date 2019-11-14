// reverse  a string

#include<iostream>
using namespace std;
int reverseNum(int n)
{
 int reverse = 0;
 
 
while(n > 0)
{

reverse = (reverse * 10) + n % 10;
n = n/10;
} 
std::cout<< reverse;
}
int main()
{
int n;
std::cout<<"enter num\n";
std::cin>> n;
std::cout<<"the reverse of the number\n";
reverseNum(n);
return 0;
}
