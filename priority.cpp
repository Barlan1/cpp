#include<iostream>
#include<queue>
using namespace std;
int main()
{
priority_queue<int> pq;
pq.push(3);
pq.push(5);
pq.push(2);
 cout<<pq.top()<<endl;
 return 0;
}
