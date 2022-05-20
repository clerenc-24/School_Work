#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <set>
#include <unistd.h>
#include <array>
#include <utility> //to use the pair
using namespace std;

void maze(int n,int m){
    for (int row=1;row <= 2*n+1; row++){

        if (row%2==1){
			
            cout<<"+"<<"";
            for(int col=1; col < m+1; col++){
                //sleep(1);
				cout <<"--+"<<"";
                //cout <<"  +"<<"";
                }
        }
        if (row%2==0){
			//sleep(1);
            cout<<"|"<<"";
            for(int col=1; col < m+1; col++){
			//	sleep(1);
                cout <<"  |"<<"";
                //cout <<"   "<<"";
            }
        }
        cout <<"\n";
    }
}

int sum(int k){
    if(k>0){
        return k+sum(k-1);
    }else{
        return 0;
    }
}

void example(){
    vector<string> msg {"Hello","Clerence ", "C++", "World", "from", "VS Code", "and the C++ extension!"};
    
    for (const string& word : msg){
        cout << word << " ";
    }
    cout << '\n';
}

int main(){
    maze(4,4);
    //cout<<sum(90)<<'\n';
    //stack<int> st;
    //st.push(10);
    //st.push(20);
    //st.push(30);
    //st.push(40);
    //st.push(50);
    //st.pop();
    //st.pop();
    //while (!st.empty())
    //{
      //  cout<<' '<<st.top();
        //st.pop();
 //   }
	typedef pair<int,int> vertex_t;
	typedef pair<vertex_t,vertex_t> edge_t;
	vertex_t v ={3,6};
	vertex_t u = {3,7};
	edge_t e = {v,u};
	
	for (int i =0;i <sizeof(e)/sizeof(int);i++){
	cout<<i;}
    cout<<'\n';
    return 0;
}
