// finding freq of every word using unordered_map
#include<bits/stdc++.h>
using namespace std;

void freqWord(const string &str)
{
 unordered_map<string, int> FW;
 
 stringstream s(str);  
 string word;  
 while( s >> word)
   FW[word]++;
 
 unordered_map<string, int>::iterator itr;

 for( itr= FW.begin(); itr !=FW.end(); itr++)
   
  cout<<"("<<itr->first <<"\t->" << itr->second<<")"<< endl;
}

int main()
{
 string str = "india is great country but India is great poor country , make it again great";

freqWord(str);
return 0;
}
