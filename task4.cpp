#include <iostream>
#include<windows.h>
using namespace std;
void printmaize();
void playermove(int x, int y);

void gotoxy(int x, int y)
 {
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }


main()
{
 system("cls");
 printmaize();
 int x=3;
 int y=3;
 while(true)
{
 playermove(x,y);
 if(y < 10)
 {
   y= y+1;
 }
 if (y== 10)
 {
    y=y-1;
 }
}

}
 

void printmaize()
 {
  cout<<"###################################################"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"||                                               ||"<<endl;
  cout<<"###################################################"<<endl;
 }

void playermove(int x, int y)
 {
   gotoxy(x, y-1);
   cout<<" ";
   gotoxy(x, y);
   cout<<"P";
  Sleep(200);
 }