#include <iostream>
#include <string>
using namespace std;

int main() {
	system("color 5b");
	string greeting = "          Hello \n";
	cout<< greeting;
	cout << "Welcome to C++ calculator. Coded By Swapnil  \n";
  float x, y, sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  
  sum = x + y;
  
  if(x<y){
  	cout << "first number should not be smaller than second \n";
  }
  else{
  	cout << "Ok.Fetching answer \n\n";
  	cout << "Operator         Operations \n\n";
  		cout << "Sum(+) is:        " << x << "+" << y << "=" << sum << "\n";
 
  }
 cout << "Thank you for calculating in our calculator";
  return 0;
}
