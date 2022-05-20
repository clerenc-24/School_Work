#include <iostream>
using namespace std;
long long factorial(int x){
	int facto = 1;
	if (x == 0){
		facto = 1;
		}else{
		facto = x*factorial(x - 1);}
	return facto; 
}

float celcius2fahren(long x){
	return (9/5)*x + 32;}
	
	
float fibonacci(float x){
	
	float temp = 1;
	if (x == 0){temp = 0;} else if (x == 1){temp = 1;}else{temp = fibonacci(x-1)+fibonacci(x-2);}
	return temp;
}


int main(){
	long x;
	//cout << "Input positive integer:  ";
	//cout << "Input temperature in Celcius:  ";
	cout << "Enter integer n for n-th fibonacci:  ";
	cin >> x; 
	if (x < 0){}
	//cout << factorial(x)<< "\n";
	//cout <<celcius2fahren(x) << " Farenheits" <<"\n";
	cout << fibonacci(x)<< "\n";
	return 0;
}
