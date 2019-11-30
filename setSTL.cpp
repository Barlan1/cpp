//set class in stl


#include<iostream>
#include<set>
#include<iterator>
using namespace std;

int main()
{
set <int, greater <int> >  n1;

n1.insert(4);
n1.insert(23);
n1.insert(47);
n1.insert(34);
n1.insert(32);
n1.insert(45);

set<int, greater <int> > :: iterator itr;
cout<<"\n the set n1 is: ";
for(itr = n1.begin(); itr !=n1.end(); ++itr)
{
cout<<'\t'<< *itr;
}
cout<<endl;


set <int> n2( n1.begin(), n1.end());
cout<<"\n the set n2 after assign  n1 :";
for(itr=n2.begin(); itr != n2.end(); ++itr)
{
cout<<'\t'<<*itr;
}
cout<<endl;

return 0;
}
