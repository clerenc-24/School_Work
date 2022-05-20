#include <iostream>
#include <cmath>
using namespace std;

const double PI(acos(-1));
int main(){
	double a = -1, b{-1}, c(sqrt(2)), s, area;
	
	if (a+b<= c or a+c<=b or b+c<= a){
		/*We do not check if sides are negative because either way one of the inequalities will not be satisfied.
		e.g if a<0 and b,c>0 ==> b+c <=0 which is a contradiction.
			if a,b< 0 and c>0 ==> a+b <0 <=c which is also a contradiction.
		*/
		cout << "No triangle with sides "<<a<<","<<b<<" and "<<c<<"\n";
		
		g[5]
	}else {
		s = (a+b+c)/2 ; //semi-perimeter
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		cout << "The area is "<<area<<" square units. Thank you!"<<"\n";
	}
	return 0;
}