#include<bits/stdc++.h>
using namespace std;

int evenOccurSum(int a[], int n)
{
	 
	
	unordered_map<int,int> mp;
	for(int i=0; i<n; i++)
	{
		
		mp[a[i]]++;
	}
	int sum= 0;
	for(auto itr = mp.begin(); itr != mp.end(); itr++)
	{
	if(itr->second % 2==0)
	sum+= (itr->first) *(itr->second);
    }
	return sum;
}

int main() 
{ 
    int arr[] = { 10, 20, 20, 40, 40 }; 
  
    int N = sizeof(arr) / sizeof(arr[0]); 
  
    cout << evenOccurSum(arr, N); 
  
    return 0; 
} 
