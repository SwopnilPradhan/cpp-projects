#include <iostream>
using namespace std;

int main() {
	system("color 3f");
	cout << "Welcome to C++ calculator. Coded By Swapnil  \n";
  int x, y;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  if(x < y){
  	cout << "The number "<< y <<" is greater";
  }
  else if(x > y){
  	cout << "The number "<< x <<" is greater";
  }
  else{
  	cout << "The numbers are equal";
  }
}
