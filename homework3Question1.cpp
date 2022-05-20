#include <iostream>
#include <cmath>
#include <sstream>
#include <string>
using namespace std;

string base3rep(int n, int m, int d){
	
	return 0;
}


void base3(int numerator,int denominator,int precision){
	int b = 0;
	while (3*denominator < numerator){
		denominator = 3*denominator;
		b++;
	}
	while(b >= -precision){
		cout << floor(numerator/denominator);
		numerator = 3*(numerator%denominator);
		if (b == 0){
			cout <<".";
		}	
		b--;
	}
	cout << "\n";
}

int main(){
	int numerator,denominator,precision;
	cout <<"Type the numerator: ";
	cin >> numerator;
	cout << "Type the denominator: ";
	cin >> denominator;
	cout <<"Type the precision: ";
	cin >> precision;
	base3(numerator,denominator,precision);
	return 0;
}
