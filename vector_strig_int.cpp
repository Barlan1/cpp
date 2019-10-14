#include <iostream>
#include <vector>

using namespace std;

int main()
{
vector<int> v;
 vector<string> s;
s.push_back("hi");

    v.push_back(1);
v.push_back(2);
v.push_back(5);
for(vector<int>::iterator i=v.begin(); i !=v.end(); i++)
{
cout<<*i<<" ";
}
for(vector<string>::iterator f=s.begin(); f !=s.end(); f++)
{
cout<<*f<<" ";
}
}
