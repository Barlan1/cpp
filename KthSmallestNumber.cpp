/program for Kth smallest in an unsorted array
//using quickselect method (avg O(n), WC O(n^2) )

#include<bits/stdc++.h>
using namespace std;

int swap(int *x, int *y)
{
  int t= *x;
    *x = *y;
    *y = t;
}
//partition function is same as in quicksort
int partition( int a[], int low, int high)
{
 int pivot= a[high];
 int i = low;
 for(int j=low; j<= high-1; j++)
 {
   if(a[j] <= pivot)
    {
      swap(&a[i], &a[j]);
      i++;
    }
  }
  swap(&a[i], &a[high]);
  return i;
}
int kthsmallest(int a[], int low, int high, int k)
{
 if(k > 0 && k <= high-low+1)
 {
  int index = partition(a, low, high);
  if( index-low == k-1)
    return a[index];
  if(index-low > k-1)
    return kthsmallest(a, low, index-1, k);
  return kthsmallest(a, index+1, high, k-index+low-1);
 }
 return INT_MAX;
}
int main()
{
 int a[]= { 5,2,19,4,23,12,33,56,28};
 int n= sizeof(a)/ sizeof(a[0]);
 int k;
 cout<<"Hey can you enter the index"<<endl;
 cin>>k;
 cout<<"Alright the" << k << " Smallest number is"<<"\n";
 cout<< kthsmallest(a, 0, n-1, k);
 cout<<"\n";
 return 0;
}
