#include <iostream>
#include <vector>
using namespace std;

int divisors(int i){
	int counter = 0;
	for(int j = 1; j <= i; j++){
		if (i%j == 0){
			counter += 1;
		}
	}
	return counter;
	//if (counter == 2){
		//return i;
	//}
}

vector<int> divisors2(int i){
	vector<int> vec;
	for (int j=1; j < i; j++){
		if (i%j == 0){
			vec.push_back(j);
		}
	}
	return vec;
}
int perfect(int i){
	int sum = 0;
	
	for (int j = 1;j < i; j++){
		if (i%j == 0){
			sum += j;
		}}
	return sum;
	}

int main(){
	int p = 100000;
	//for(int i = 2;i <= p;i++){
		//if (divisors(i)==2){
			//cout <<i<<" ";
		//}
	//}
	for(int i = 1;i <= p;i++){
		if (perfect(i) == i){
			cout <<i<<" ";
		}
	}
	
	cout << "\n";
	return 0;
}