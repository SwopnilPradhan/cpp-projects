#include <iostream>
using namespace std;

int main() {
	system("color 40");
	cout << "Welcome to C++ calculator. Coded By Swapnil  \n";
  float x, y,BMI,convert;
   cout << "Enter mass in kg: \n";
  cin >> x;
  cout << "Enter height in centimeter: \n";
  cin >> y;
  cout << endl;
  convert = y/100;
  BMI = x/convert;
  cout << "The BMI of weight and height of a person is "<<  x << "kg/" << convert << "m =" << BMI << "\n";
  cout << "Thank you for calculating in BMI calculator";
  cout << endl;
}
