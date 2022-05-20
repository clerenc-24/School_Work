#include <iostream>
#include <array> //in order to use arrays
#include <vector>
using namespace std;
//c++ containers 


int main(){
	
	vector<float> v = {1.1,2.2,3.14};//dynamic array size, mutable size 
	vector<float, 5> w;
	array<int, 7> ar = {1,2,3,4,5,6};
	//ar.fill(300);
	
	//for(array<int,7>::iterator p=ar.begin();p!=ar.end();p++){*p=123;}
	//cout << ar[2]<<"\n";
	//cout << ar.at(2)<<"\n";
	return 0;
}