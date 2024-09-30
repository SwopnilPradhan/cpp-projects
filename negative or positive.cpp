#include <iostream>
using namespace std;
    
int main() {
	system("color 60");
	cout << "Welcome to C++ calculator. Coded By Swapnil \n";
	int x;
	cout << "Type a number: ";
	 cin >> x;
	 if(x < 0){
	 	cout << "The number "<< x <<" is negative \n";
	 }
	 else if(x > 0){
	 	cout << "The number "<< x <<" is positive \n";
	 }
	 else{
	 	cout << "The number "<< x <<" is 0(no negative and positive) \n";
	 }
}
