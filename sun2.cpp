#include <iostream>
#include <string>
using namespace std;


int main(){
	int x=5, y=100;
	char s[] = {'G', 'C', 'A', 'T', 'C', 'G', 'C', 'A', 'G', 'A', 'G', 'A', 'G', 'T', 'A', 'T', 'A', 'C', 'A', 'G', 'T', 'A', 'C', 'G'};
	int m = sizeof(s); 
	string g = "my name is ";
	
	for (int i=0; i< m; i++){
		cout << s[i] <<" ";
	}
	cout << sizeof(s) <<"\n";
	// cout << x>y;
	cout << g.length();

return 0;
}