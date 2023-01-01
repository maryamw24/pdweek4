#include <iostream>
#include <windows.h>
using namespace std;
void printmenu();
void calAggregate(string name, int matricmarks, int intermarks, int ecatmarks);
void compare( string nameStd1, string nameStd2, int ecatmarkstd1, int ecatmarkstd2);
void gotoxy(int x, int y);


void gotoxy(int x, int y)
 {
  COORD coordinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }

main()
{
  string nameStd1,nameStd2;
  int matricmarkstd1, matricmarkstd2;
  int intermarkstd1, intermarkstd2;
  int ecatmarkstd1, ecatmarkstd2;
  char c;
  int choice;
 while(true)
 {
  system("cls");
  printmenu();
  cout<<"Enter choice:";
  cin>>choice;
  if(choice == 1)
  {
  cout<<"Enter name:";
  cin>>nameStd1;
  cout<<"Enter matric marks :";
  cin>>matricmarkstd1;
  cout<<"Enter inter marks:";
  cin>>intermarkstd1;
  cout<<"Enter ecat marks:";
  cin>>ecatmarkstd1;
  cout<<"Press any key to continue..";
  cin>>c;
  }
  if(choice == 2)
  {
  cout<<"Enter name:";
  cin>>nameStd2;
  cout<<"Enter matric marks:";
  cin>>matricmarkstd2;
  cout<<"Enter inter marks:";
  cin>>intermarkstd2;
  cout<<"Enter ecat marks:";
  cin>>ecatmarkstd2;
  cout<<"press any key to continue";
  cin>>c;
  }
  if(choice == 3)
  {
  calAggregate(nameStd1, matricmarkstd1, intermarkstd2, ecatmarkstd1);
  cout<<"Press any key to continue";
  cin>>c;
  }
  if (choice == 4)
  {
  calAggregate(nameStd2, matricmarkstd2, intermarkstd2, ecatmarkstd2);
  cout<<"Press any key to continue";
  cin>>c;
  }
  if (choice == 5)
  {
  compare(nameStd1, nameStd2, ecatmarkstd1, ecatmarkstd2);
  cout<<"Press any key to continue:";
  cin>>c;
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
}

void calAggregate(string name, int matricmarks, int intermarks, int ecatmarks)
{
 float aggregate=(matricmarks/1100)*0.3 +(intermarks/550)*0.3 +(ecatmarks/400)*0.4;
 cout<<name<<" aggregate is "<<aggregate;
}

 
void compare( string nameStd1, string nameStd2, int ecatmarkstd1, int ecatmarkstd2)
{
  if (ecatmarkstd1 > ecatmarkstd2)
  { 
  cout<<"Rollnumber 01 is for "<<nameStd1<<endl;
  }
  if (ecatmarkstd2 > ecatmarkstd1)
  {
  cout<<"Rollnumber 01 is for "<<nameStd2<<endl;
  }
}