#include <iostream>
#include <cmath>
using namespace std;

const double PI(acos(-1));
int main(){
	double a =-90,b{-5},c(2.5), para,result;
	para = 60.0;
	result = cos(para*PI/180.0);
	if (a+b<= c or a+c<=b or b+c<= a){
		cout << "No triangle with sides "<<a<<","<<b<<" and "<<c<<"\n";
		
	}else {
		cout<<"Thank you!"<<"\n";
		cout << "Cosine of "<<para<<" degrees is "<<result<<"."<<"\n";
	}
	return 0;
}