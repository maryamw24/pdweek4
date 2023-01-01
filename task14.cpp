#include<iostream>
#include <windows.h>
using namespace std;
void printmenu();
void gotoxy(int x, int y);
void calAggregate1(string stdname1, int mMarks1, int iMarks1, int eMarks1);
void calAggregate2(string stdname2, int mMarks2, int iMarks2, int eMarks2);
void details1(string stdname1, int mMarks, int iMarks1, int eMarks1);
void details2(string stdname2, int mMarks2, int iMarks2, int eMarks2);

 void gotoxy(int x, int y)
 {
  COORD coordinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }

main()
{
 system("cls");
 char choice;
 string stdname1;
 int mMarks1;
 int iMarks1;
 int eMarks1;
 char key;
 string stdname2;
 int mMarks2; 
 int iMarks2;
 int eMarks2;
 

 printmenu();
 cin>>choice;
 if (choice == 'a')
 {
 details1 (stdname1, mMarks1, iMarks1, eMarks1);
 }
 system("cls");
 printmenu();
 if (choice =='b')
 {
 details2( stdname1, mMarks2, iMarks2, eMarks2);
 }
 system("cls");
 printmenu();
 if (choice == 'c')
 {
 system("cls");
 calAggregate1(stdname1, mMarks1, eMarks1, iMarks1);
 }
 system("cls");
 printmenu();
 if  (choice =='d')
 {
 system("cls");
 calAggregate2(stdname2, mMarks2, iMarks2, eMarks2);
 }
 system("cls");
 printmenu();
 if(choice == 'e')
 {
  if ("eMarks1" > "eMarks2")
  {
  cout<<"RollNumber01 is:"<<stdname1;
  }
  if ("eMarks2" > "eMarks1")
  {
  cout<<"RollNumber01 is:"<<stdname2; 
  }
 }
}


void printmenu()
{
 system("cls");
 char choice;
 cout<<"***********************************"<<endl;
 cout<<"*           UET LAHORE            *"<<endl;
 cout<<"***********************************"<<endl;
 gotoxy(1,10);
 cout<<"Welcome to UET Admission Management System"<<endl;
 gotoxy(1,13);
 cout<<"Press a to Enter details of first student!";
 gotoxy(1,14);
 cout<<"Press b to Enter details od second student!";
 gotoxy(1,15);
 cout<<"Press c to calculate aggregate of first student!";
 gotoxy(1,16);
 cout<<"Press d to calculate aggregate of second student!";
 gotoxy(1,17);
 cout<<"Press e to display the student with rollNumber 01!"<<endl;
 cout<<"Enter choice";
 cin>>choice;
}

void details1(string stdname1, int mMarks1, int iMarks1, int eMarks1)
{
 system("cls");
 char key;
 cout<<"Enter your name:";
 cin>>stdname1;
 cout<< "Enter your matric marks:";
 cin>>mMarks1;
 cout<<"Enter your inter marks:";
 cin>>iMarks1;
 cout<<"Enter you ecats marks:";
 cin>>eMarks1;
 cout<<"Press any key to continue....";
 cin>>key;
}

void details2(string stdname2, int mMarks2, int iMarks2, int eMarks2)
{
 system("cls");
 char key;
 cout<<"Enter your name:";
 cin>>stdname2;
 cout<< "Enter your matric marks:";
 cin>>mMarks2;
 cout<<"Enter your inter marks:";
 cin>>iMarks2;
 cout<<"Enter you ecats marks:";
 cin>>eMarks2;
 cout<<"Press any key to continue..";
 cin>>key;
}
 


void calAggregate1(string stdname1, int mMarks1, int iMarks1, int eMarks1)
{
 float aggregate1;
 char key;
 aggregate1=(mMarks1*0.3)+(iMarks1*0.3)+(eMarks1*0.4);
 cout<<"Aggregate"<<aggregate1;
}

void calAggregate2(string stdname2, int mMarks2, int iMarks2, int eMarks2)
{
 float aggregate2;
 aggregate2=(mMarks2*0.3)+(iMarks2*0.3)+(eMarks2*0.4);
 cout<<"Aggregate"<<aggregate2;
}

void compareMarks(string stdname1, int eMarks1, char stdname2, int eMarks2)
{
  if ("eMarks1" > "eMarks2")
  {
  cout<<"RollNumber01 is:"<<stdname1;
  }
  if ("eMarks2" > "eMarks1")
  {
  cout<<"RollNumber01 is:"<<stdname2; 
  }
}
