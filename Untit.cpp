#include <iostream>
using namespace std;

int main() {
	system("color 3f");
	cout << "Welcome to C++ calculator. Coded By Swapnil  \n";
  int x, y;
  cout << "------------------------------SN CARE------------------------------\n ";
  cout << "What is your order t-shirt(1), pants(2) or caps(3)\n ";
  cin >> x;
  if(x == 1 || x==2 || x== 3){
  int d;
     cout << "price";;
  cin >> y;
            if(y>=500 && y<=1000){
                d= (y*20)/100;
                int price = (y - d*1);
                cout<< "The price of your item(deducted) is " + price;
            }
            else if(y>1000 && y<=10000){
                d= (y*30)/100;
                int price = (y - d*1);
                cout<<"The price of your item(deducted) is " + price;
            }
            else if(y>10000){
                d= (y*40)/100;
                int price = (y - d*1);
                cout<<"The price of your item(deducted) is " + price;
            }
            else{
                d= 0;
                int price = y-d*1;
                cout<<"The price of your item is " + price;
            }
  }
  else{
  	cout << "The numbers are equal";
  }
}
