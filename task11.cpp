#include <iostream>
using namespace std;
void limit(int speed);

main()
{
 int speed;
 while(true)
 {
 cout<<"Enter your speed:";
 cin>>speed;
 limit(speed);
 }
}

void limit(int speed)
{
 if (speed <= 100)
 {
  cout<<"You are driving safe"<<endl;
 }
 if (speed > 100)
 {
 cout<<" YOU WILL BE CHALLENGED"<<endl;
 }
}