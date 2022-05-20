#include <iostream>
#include <vector>
using namespace std;
void swap(int&a,int&b){
	int temp = a;
	a = b;
	b = temp;
}
void print(std ::vector<int> v){
	for (int k = 0;k < v.size();k++){
		cout << v[k]<<" ";
	}
	cout << "\n";
}
void bubble_sort(vector<int>&v){
	bool check = true;
	for (int h = 0; h < v.size()-1; h++){
		if (v[h]>v[h+1]){
			check = false;
		}
	}

	if (check){
		print(v);
		
	}else{
		for(int i=v.size() - 1; i != 0;i--){
			for(int j = 0; j < i; j++){
				print(v);
				if (v[j] > v[j+1]){
					swap(v[j],v[j+1]);
			}
		}
	}
}	
}
int main(){
	vector<int> vec = {6,1,3,2,0};
	//vector<int> vec = {0,1,2,3,6};
	bubble_sort(vec);
	return 0;
}