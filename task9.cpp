#include <iostream>
using namespace std;
void reverse(string condition);

main()
{ 
 string condition;
 cout<<"Enter the condition:";
 cin>>condition;
 reverse(condition);
}


void reverse(string condition)
{
 if (condition=="true")
 {
  cout<<"False";
 }
 if (condition=="false")
 {
  cout<<"True";
 }
}