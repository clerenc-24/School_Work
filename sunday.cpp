#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
	string txt = "My name is Real N** sh*t \n";
	int x=8, y = -3;
	
	if (x <= y) {
	cout << "Length of your string is "<< txt.length() << "\n";
	cout << txt;
	}else{
		cout << "x is not less than y \n"<< "The sum of x and y is "<< x + y << "\n";
		cout << "Square root of x is "<< sqrt(x)<<"\n";
		cout << "Square root of y is "<< sqrt(abs(y)) <<"\n";
	}
	return 0;
}
