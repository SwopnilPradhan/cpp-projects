#include <iostream>
using namespace std;
    
int main() {
		system("color 9f");
	
	cout << "Welcome to C++ calculator. Coded By Swapnil \n";
	int x;
	int before;
  int after;
	 cout << "Type a number: ";
	 cin >> x;
	 before = x-1;
	 after = x+1;
	 
  cout << "After number is: " << after << "\n";
  cout << "Before number is: " << before << "\n";
  return 0;
}
