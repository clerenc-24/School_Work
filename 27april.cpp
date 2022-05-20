#include <iostream>
#include <string>
using namespace std;

class Number{
public:
	Number(int n) {
		this -> the_number = n;  //same as (*this).the_number
	}
	string getInBase (int b){
		int f = the_number;
		string d;
		
		for (int i=1; i<b; i++){
			d+=to_string(f%b);
			f /= f/b;
			}
		return d;	
	}; //member functions
	
private:
	int the_number; //member data
};


int main(){
	Number n = Number(10);
	cout << n.getInBase(2) <<"\n";
	return 0;
}
