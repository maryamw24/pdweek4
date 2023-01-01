#include <iostream>
using namespace std;
void payment(float ori_price);

main()
{
 int r_rose;
 int w_rose;
 int tulips;
 float ori_price;

 cout<<"Enter number of red roses:";
 cin>>r_rose;
 cout<<"Enter number of white roses:";
 cin>>w_rose;
 cout<<"Enter number of tulips:";
 cin>>tulips;

 ori_price= (r_rose*2.00)+(w_rose*4.10)+(tulips*2.50);
 payment(ori_price);
}

void payment(float ori_price)
{ 
 float discount;
 float discount_price;

 if (ori_price >200.00)
 {
  discount= ori_price*0.2;
  discount_price = ori_price-discount;
  cout<<"discount price is:"<<discount_price<<endl;
 }
 if (ori_price <=200.00);
 {
  cout<<"original price:"<<ori_price<<endl;
 }
}