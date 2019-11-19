// check if a point lies inside or outside a rectangle

#include<bits/stdc++.h>
using namespace std;

float area( int x1, int y1, int x2, int y2, int x3, int y3)
{
 return abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2.0);
}
bool isInside(int x1, int y1, int x2, int y2, int x3, int y3,int x4,int y4,int x,int y )
 {
  float A= area(x1,y1,x2,y2,x3,y3)+
   area(x1,y1,x4,y4,x3,y3);
  
 float T1= area(x1,y1,x2,y2,x,y);
 float T2= area(x2,y2,x3,y3,x,y);
 float T3= area(x3,y3,x4,y4,x,y);
 float T4= area(x4,y4,x1,y1,x,y);

return ( A == T1+T2+T3+T4);
}
 int main()
{
if(isInside(0,0,0,10,20,10,20,0,0,11))

cout<<"yes";
else 
cout<<"no";
return 0;
}
