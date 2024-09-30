#include <iostream>
using namespace std;
int main(){
		system("color 5b");
    int n,no;

    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Enter in range:";
    cin >> no;
    for (int i = 1; i <= no; ++i) {
        cout << n << " X " << i << " = " << n * i << endl;
    }
    
    return 0;
}
