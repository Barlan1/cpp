#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int bsearch(int arr[],int l, int r, int x)
{
int mid = l+(r-l)/2;
if(r>=l)
{
if(arr[mid]== x);
 return mid;
 if(arr[mid]> x)
 return bsearch(arr,l,mid-1,x);
 else 
 return bsearch(arr,mid+1,r, x);
 }
 return -1;
}
 int main(void)
 {
 int arr[]= {3,5,8,10,14,18,19,20,21,35,48,67,78};
 int x= 35;
 int n = sizeof(arr)/sizeof(arr[0]);
 int result = bsearch(arr,0,n-1,x);
 if (result==-1)
 cout<<"not in list";
 else
 cout<<"element at index "<< result;
 return 0;
 }
 
//there is some problem with this code
