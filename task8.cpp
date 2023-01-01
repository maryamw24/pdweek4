#include <iostream>
using namespace std;
void Isequal(int number1, int number2);

main()
{
 int number1;
 int number2;
 cout<<"Enter first number:";
 cin>>number1;
 cout<<"Enter second number:";
 cin>>number2;
 Isequal(number1, number2);
}

void Isequal(int number1, int number2)
{
 if (number1 == number2)
  { 
  cout<<"True"<<endl;
  }
 if (number1 != number2)
  {
  cout<<" False "<<endl;
  }
}
