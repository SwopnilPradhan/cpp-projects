#include <iostream>
using namespace std;
//inclding dev cpp
void draw_rectangle(int height, int width){
     
        for(int i=0; i<height; i++){
            for(int j=0; j<width; j++){
                cout << "* ";
            }
            cout << endl;
        }
     
    }
     
int main() {
    system("color 7d");
	cout << "Welcome to C++ calculator. Coded By Swapnil \n";
	
     
  int x, y;
  int sub;
  int multiply;
  cout << "Type the length: ";
  cin >> x;
  cout << "Type the breadth: ";
  cin >> y;
  if(x < y){
  	x=y;
  	y=x;
  }
  else{
  	x=x;
  }
  sub = x * y;
  multiply = 2*x + 2*y;
  cout << "The shape of rectangle will be: \n";
  draw_rectangle(y,x);
  
  cout << "Area is: " << sub << "\n";
  cout << "Perimeter is: " << multiply << "\n";
  return 0;
}
