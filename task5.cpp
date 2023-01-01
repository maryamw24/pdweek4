#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void name();

main()
{
 system("cls");
 name();
}

 void gotoxy(int x, int y)
 {
  COORD coordinates;
  coordinates.X= x;
  coordinates.Y= y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 }

void name()
{ 
 gotoxy(60,22);
 cout<<"##        ##   ########   #######   #           #   ########   ##         ##";
 gotoxy(60,23);
 cout<<"# #      # #   #      #   #     #     #       #     #      #   # #       # #";
 gotoxy(60,24);
 cout<<"#  #    #  #   ########   #######       #    #      ########   #  #     #  #";
 gotoxy(60,25);
 cout<<"#   # #    #   #      #   # #             #         #      #   #    #  #   #";
 gotoxy(60,26);
 cout<<"#    #     #   #      #   #  #            #         #      #   #     #     #";
 gotoxy(60,27);
 cout<<"#    #     #   #      #   #   #           #         #      #   #     #     #";
}
 