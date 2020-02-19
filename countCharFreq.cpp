//count the freq of charecter
#include<bits/stdc++.h>
using namespace std;
void countFreq(string str)
{
	
	int n= str.length();
	unordered_map<char, int> map;
	int count =0;
	for( int i= 0; i<n;i++)
	{
		map[str[i]]++;
	}
	
	for(int i=0; i<n;i++)
	{
		if(map[str[i]]!='\0')
		cout<<str[i]<<"->"<<map[str[i]]<<endl;;
		map[str[i]]=0;
		
			}
     return;
}
int main()
{
	string str= "1aba2bc1a2ab2b2a1";
	countFreq(str);
	return 0;
	
}
