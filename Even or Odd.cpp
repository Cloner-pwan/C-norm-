#include <iostream>
using namespace std;

int main () {

	int Number;
	cout << "Enter the number: ";
	cin >> Number;
	int even = Number % 2; 
	if (even == 0){
		cout << "The number you entered is even !";
		
	}else {
		cout << "The number you entered is odd !";
	}
	
}