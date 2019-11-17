// compile g++ -std=c++11 file.cpp -o main
//run ./main

#include<iostream>
#include<regex>

using namespace std;
int main()
{
if(regex_match("vikasispikas", regex("(vik)(.*)") ))
cout<<"string does match\n";


return 0;
}

 
