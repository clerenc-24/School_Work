#include <iostream>
#include <vector>
#include <string>
using namespace std;

int gcd1 (int a, int b){
	int tmp;
	if (a < b){
		tmp = a;
		a = b;
		b = tmp;
	}
	while (b > 0){
		tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
}
int gcd (vector<int> array){
	
	int	g = gcd1(array[0],array[1]);
	for (int i=2; i < array.size(); i++){
		//g = gcd1(array[i],array[i+1]);
		g = gcd1(g,array[i]);	
	}return g;
}
int extended (int a, int b){ //extended gcd implementation
	int old_r = a, old_s = b;
	do {
		
	} while (r != 0);
}

int main(){
	vector<int> array; //= {2,4,6,8,10,12,20};
	//int counter(0);
	cout << "Enter your integers and hit ctrl-D \n";

	while(cin){
		string next;
		cin >> next;
		if (""!=next){
			array.push_back(stoi(next));
			//counter++;
		}
	}
	array.shrink_to_fit();
	//cout << gcd1(10,5)<<"\n";
	cout <<"gcd of your array is = "<< gcd(array)<<"\n";
	return 0;
}