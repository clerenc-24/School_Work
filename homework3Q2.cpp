#include <iostream>
#include <sstream>
#include <string>
#include <cmath>
//#include "homework3Question1.cpp"
using namespace std;

string base3rep(int n,int m, int d){
	string k;
	int b = 0;

	while (3*m < n){
		m = 3*m;
		b++;
	}
	while (b >= -d){

		//k += std::to_string(floor(n/m));
		k.append(std::to_string((int)floor(n/m)));
		n = 3*(n%m);

		if (b==0){
			k += '.';
		}
		b--;
	}
	
	return k;
}
int main(int argc, char** argv){
	if (argc < 2){
		cerr <<"Usage: "<<argv[0]<<" [numerator denominator precision] INTEGERS"<<"\n";
		return 1;
	}
	int num, den, prec;
		num = stoi(argv[1]);
		den = stoi(argv[2]);
		prec = stoi(argv[3]);	

	cout << num <<" / "<< den <<" = ";
	cout << base3rep(num, den, prec);
	cout <<"\n";

return 0;
}
