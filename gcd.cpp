#include <iostream>
using namespace std;
int gcd(int a, int b){
	int tmp;
	if (a<b){
		tmp = a;
		a = b;
		b = tmp;
	}
	while(b>0){
		tmp = a%b;
		a = b;
		b =tmp;
	}
	return a;
}

int main(){
	int a,b;
	cout << "a,b = ";
	cin >> a>>b;
	
	//cout <<"b = ";
	//cin >> b;
	
	cout <<"gcd(" <<a<<","<<b<<") = "<<gcd(a,b)<<"\n";
	return 0;
}