#include <iostream>
using namespace std;

void table(int n = 11){

    for (int i = 1;i < 11;i++){
        for (int j = 1; j < 11;j++){
            cout <<i*j<<" ";
            }
        cout << "\n";    
        }
    cout <<"\n";
    }

int main(){
    table();
    return 0;
    }
