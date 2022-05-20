#include <iostream>
using namespace std;

int m = 10; //Global variable
int mult(int x, int y){return x*y;}
int use_m(int x){
	x = x+m;
	m=m+1;
	return x;
}

int inverse(int x) {return -x;}
float inverse (float x){return 1/x;}

int main(){
	int a = 20,b=30;
	//cout << mult(use_m(a),use_m(b)) <<"\n";
	cout << inverse(a)<<"\n";
	
	return 0;
}