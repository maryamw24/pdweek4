#include <iostream>
using namespace std;
void sleep(int holidays);

main()
{ 
 int holidays;
 cout<<"Enter number of holidays:";
 cin>>holidays;
 sleep(holidays);
}

void sleep(int holidays)
{
 int work_days;
 int game_time;
 int difference;
 int hours;
 int minutes;

 work_days=365-holidays;
 game_time=(127*holidays)+(63*work_days);

 if (game_time <= 30000)
 {
  cout<<"Tom sleeps well"<<endl;
  difference=30000-game_time;
  hours= difference/60;
  minutes= difference%60;
  cout<<hours<<" hours ";
  cout<<minutes<<" minutes less for play ";
 }
 if (game_time > 30000)
 {
  cout<<"Tom will run away"<<endl;
  difference=game_time-30000;
  hours= difference/60;
  minutes= difference%60;
  cout<<hours<<" hours ";
  cout<<minutes<<" minutes more for play ";
 }
}
 
 
 