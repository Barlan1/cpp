#include<iostram>
using namespace std;
int binary(int arr[],int l,int r, int x)
{
if(r>=l)
{
int mid = l+(r-l)/2;
if(arr[mid]==x)
return mid;
else if(arr[mid]<x)
return binary(arr,mid+1,r,x);
else
return binary(arr,l,mid-1,x);
}
return -1;
}
int main(void)
{
int arr[]={12,13,14,15,23,34,54,46,56,67,68};
int n=sizeof(arr)/sizeof(arr[0]);
int x=56;
int result = binary(arr,0,n,x);
if(result ==-1)
{
cout<<"don't exist";
}
else
cout<<result;
return 0;
}

