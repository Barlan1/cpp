 //upper_bound in STL
 //lower_bound in STL
#include<bits/stdc++.h>
using namespace std;
int main()
{
 std::vector<int> v{10,20,23,34,45,56};

 std::cout<<"vector contents : ";
 for(int i =0; i < v.size(); i++)
 std::cout<<" "<< v[i];
 std::cout<<"\n";

 std::vector<int>::iterator low, upper2;
 
 low = std::lower_bound(v.begin(), v.end(),23 );
 upper2 = std::upper_bound(v.begin(), v.end(), 23);
 
 std::cout<<"\n lower_bound for 34 is at "<<(low - v.begin());
 std::cout<<"\n upper_bound for 45 is at "<<(upper2 - v.begin());
return 0;
}
