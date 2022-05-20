#include <iostream>
#include <vector>
using namespace std;

int f(int n){
	if (n%2 ==0){
		return n/2;
	}else{
		return n*3+1;
	}
}	
int t(int n){
	int counter = 0;
	while (n>=1){
		counter ++;
		n = f(n);
	}
	return counter;
}
int binomial(int n,int k){	
	if (n <= 0){
		return 1;
	}else{
		return n*binomial(n - 1,k - 1)/k ;
	}
}
int binomial2(int n, int k){
	int counter = 1;
	for (int i = 1; i <= k; i++){
		counter *= n -i + 1;
		counter /= i;
	}return counter;
}
void pascal(int k){
	for (int i = 0; i < k; i++){
		for (int j = 0; j < i; j++){
		cout <<binomial2(i,j);}
		cout << "\n";
	}
}
void bubble(vector<int>& n){
	
	for (int i =n.size() - 1 ;i > 0 ; i--){
		for (int j = 0; j < i; j ++){
			if (n[j] > n[j+1]){
				int tmp = n[j];
				n[j] = n[j+1];
				n[j+1] = tmp;
			}
		}
	}
	
}
int main(){
	// cout << binomial2(49,6)<<"\n";
	// cout << binomial2(90,5)<<"\n";
	//cout << pascal(10)<<"\n";
	//pascal(10);
	// cout << f(25) << "\n";
	vector<int> a = {8,1,4,2,3}; 
	bubble(a);
	cout << "Sorted array ";
	for (int i =0; i <a.size(); i++){
		cout <<a[i] <<" "; 
	}
	cout << a[0]<<"\n";
	return 0;
}