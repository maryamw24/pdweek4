#include <iostream>
using namespace std;
void ticketprice(int ticket, string country);

main()
{
 int ticket;
 string country; 
 while(true)
 {
 cout<<"Enter country:";
 cin>>country;
 cout<<"Enter ticket price in dollars:";
 cin>>ticket;
 ticketprice(ticket, country);
 }
}

void ticketprice(int ticket, string country)
{
 float discount;
 float total;
 if (country == "pakistan")
  {
  discount= ticket*0.05;
  total= ticket-discount;
  cout<<"total price is:"<<total<<endl;
  }
 if (country == "ireland")
  {
  discount= ticket*0.1;
  total= ticket-discount;
  cout<<"total price is:"<<total<<endl;
  }
 if (country == "india")
  {
   discount= ticket*0.2;
   total= ticket-discount;
   cout<<"total price is:"<<total<<endl;
  }
 if (country == "england")
  {
  discount= ticket*0.3;
  total= ticket- discount;
  cout<<"total price is:"<<total<<endl;
  }
 if (country== "canada")
  {
  discount= ticket*0.45;
  total= ticket- discount;
  cout<<"total price is:"<<total<<endl;
  }
}