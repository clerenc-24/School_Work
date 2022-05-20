#include <iostream>
using namespace std;

int main(){
int counter = 0;
for (int i = 0;i < 10; i++){
	for (int j =0; j< 50; j++){
	counter++;
	}
}
cout << counter<<" number of times the inner loop is entered!" <<"\n";
return 0;
}
