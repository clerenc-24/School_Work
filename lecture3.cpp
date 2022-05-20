#include <iostream>
using namespace std;
int add(int x,int y){
	int z = x+y;
	return z;
}

void addto(int&x,int y){
	x = x+y;
}
void addto(int&x){x=x+1;}

int main(){
	int z = 5;
	//float z = 5.0;
	addto(z,3);
	addto(3);
	cout << z<<"\n";
	return 0;
}