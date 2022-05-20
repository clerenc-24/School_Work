#include <iostream>
using namespace std;

int gcd(int a, int b){
	int r = a%b;
	while (a%b != 0){
		r = a%b;
		a = b;
		b = r;
	}
	return b;
}
int main(){
	//int a = 228, b = 1;
	int a,b;
	cout << "Enter value for a "<<"\n";
	cin >> a ;
	cout << "Enter value for b "<<"\n";
	cin >> b;
	cout <<"GCD is " <<gcd (a,b) << "\n";
	return 0;
}