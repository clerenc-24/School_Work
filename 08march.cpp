#include <iostream>
#include <string>
using namespace std;

int main(){
	int sum(0),counter(0);
	
	cout <<"Enter your integers and hit CTRL-D \n";
	while (cin){
		string next;
		cin >> next;
		if (""!=next) {
			sum += stoi(next);
			counter ++;
		}
	}
	cout << "Thanks. "<<counter<<" integers(s) given. ";
	cout << "Sum is "<< sum<< "\n";

	return 0;
}
