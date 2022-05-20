#include <iostream>
#include <string>
using namespace std;

void append(string &str){
	str += "different string"; //str = str + "\n"
}
void append2(string str){
	str += "different string";
}
void gcd(int a, int b, int &out){
	int tmp;
	// in order to make sure a >= b, we swap the two variables if a < b
	if (a < b){tmp = a;a = b;b = tmp;}while (b > 0){tmp = a % b;a = b;b = tmp;}
	out = a;
}
struct Vectorint{
	int x, y,z;
	string name;
};
int main(){
	//int a = 365;
	//cout << &a << "\n";
	//int *pa = &a;
	//cout << pa << "\n";
	//cout << pa +1 <<"\n";
	//cout << *pa << "\n"; //deference
	
	//string b = "Clerence";
	//append(b);
	//cout << b << "\n";

	//string c = "HLP";
	//append2(c);
	//cout << c << "\n";
	int out = -1;
	gcd(15,13, out);
	//cout << b <<"\n";
	cout << out << "\n";
	return 0;
}
