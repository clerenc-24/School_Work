#include <iostream>
#include <string>

void factorial(int x){
	long int g;
	g = factorial(x)*factorial(x - 1)
	cout << g; 
}

int main(){
	long x;
	cin >> "input number ">> x; 
	factorial(x);
	return 0;
}