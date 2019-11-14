#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
int i ;
int flag =1;
for(i= 2; i<= sqrt(n); i++)
{
 if ( n % i== 0)
   {
   flag= 0;
   break;
   }
}

if(flag == 1)
 cout<<"number is prime";
else
cout<<"not a prime";

}

int main()
{
int n;
cout<<"enter number\n";
cin>>n;

prime(n);

return 0;
}
