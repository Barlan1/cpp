//This is for learning purpose only code source geekforgeek

#include<bits/stdc++.h>
using namespace std;

bool isBalancedParanthesis(string expr)
{
 stack<int> s;
 char x;
 for(int i= 0; i<expr.size(); i++)
 {
  if(expr[i]== '(' || expr[i]== '{' || expr[i]== '[' )
   {
   s.push(expr[i]);
   continue;
   }

  if ( s.empty())
   return false;
  
 switch( expr[i])
 {
  case ')':
   x= s.top();
   s.pop();
   if(x== '{' || x== '[')
    return false;
    break;
   
  case '}':
   x= s.top();
   s.pop();
   if(x== '(' || x== '[')
    return false;
     break;

  case ']':
   x= s.top();
   s.pop();
   if(x== '(' || x== '{')
    return false;
    break;
  }
 } 
 return (s.empty());
}

int main()
{
 string expr= "{()}[{()}([])]";
 if(isBalancedParanthesis(expr))
  cout<<"Balanced";
 else
  cout<<"unbalanced";
 return 0;
}

  
