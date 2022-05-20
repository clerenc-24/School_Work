
#include <iostream>
#include <cmath>
using namespace std;

const double PI(acos(-1));
int main(){
	double param, result;
	param = 120.0;
	
	result = cos(param*PI/180.0);
	cout <<"The cosine of "<<param<<" degrees is "<<result<<"."<<"\n";
	
	return 0;
}
