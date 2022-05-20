#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;

int main(){
	ifstream datafile("coeff.data.txt");
	int counter(0);
	vector<int> coefficients;
	
	while (datafile){
		string next = "";
		datafile >> next;
		if ("" != next){
			//coefficients[counter]=stoi(next);
			coefficients.push_back(stoi(next));
			counter++;
		}
	}
	coefficients.shrink_to_fit();
	cout << coefficients.size();
	cout << counter<<"\n";

	if (coefficients[0]==0){
		cout <<"";
	}else{
		cout << coefficients[0];
	}
	for (int i = 1; i < coefficients.size(); i++){
		if (coefficients[i] < 0){
			if (coefficients[i]==-1) {
				if (i == 0){
				cout <<"-";
				}else if(i==1){
				cout <<"-x";
				}else{
				cout <<"-x"<<"^"<<i;
				}
			}else{
				if (i == 0){
				cout << coefficients[i];
				}else if(i==1){
				cout << coefficients[i] <<"x";
				}else{
				cout << coefficients[i] <<"x"<<"^"<<i;
				}
			}
			
		}else if (coefficients[i] > 0){
			if (coefficients[i]==1) {
				if (i == 0){
				cout <<"";
				} else if(i==1){
				cout <<"+x";
				}else{
					cout <<"+x"<<"^"<<i;}
			}else{
				if (i == 0){
					cout <<"+" <<coefficients[i];
				}else if( i==1){
					cout <<"+" <<coefficients[i] <<"x";
				}else{
					cout <<"+" <<coefficients[i] <<"x"<<"^"<<i;
				}
	
		}}else{
			continue;
		}
	}
	cout << "\n";
	datafile.close();
	return 0;
}
