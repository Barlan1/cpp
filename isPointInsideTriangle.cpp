//check if point is inside a circle code source geekforgeek

#include<bits/stdc++.h>
using namespace std;

float area(int x1, int y1,int x2,int y2,int x3,int y3)
{
  return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0);
}

bool isInside(int x1, int y1,int x2,int y2,int x3,int y3,int x, int y)
{
float A = area(x1,y1,x2,y2,x3,y3);

float AC= area(x1,y1,x,y,x3,y3);

float AB= area(x1,y1,x,y,x2,y2);

float BC = area(x,y,x2,y2,x3,y3);

return (A== AB + AC + BC);
}
int main()
{
if(isInside(0,0,20,0,10,30,10,0))
cout<<"inside";
else 
cout<<"outside";
return 0;
}
