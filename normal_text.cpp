#include <iostream>
#include <string>
using namespace std;


void myFunction(){
	cout << "I just got executed \n";
}

int main()
{
	myFunction();
	for (int i=0;i<=5;i++){
		for (int j=0;j<=i;j++){
			cout<<" "<<j <<" "; 			
		}
		cout<<"\n\n\n";
	}
	return 0;
}