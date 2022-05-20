#include <iostream>
#include <string>
#include <vector>
using namespace std;

class MyClass{
    public:
        void func2();
        int func(int x=0,int y=0){
            return x+y;
            }
        int age;
        string name;
        string home;
    };
void MyClass::func2(){
    cout<<"Function outside of class";
    }

class Car{
    public:
        string brand;
        string model;
        int year;
        //creation of a constructor
        Car(string x,string y,int z){
            brand = x;
            model = y;
            year = z;
        }
    };
class Private{
    public:
        int x;
    private:
        int y; //private attribute
    };

//class Student:public Car,public MyClass{public:int kilo(int x){return x;}};

int main(){
    MyClass cler; //this will call the constructor if you have it
    cler.age = 23;
    cler.name = "Clerence";
    cler.home = "Budapest";
    MyClass g;
    cout <<"Your name is "<< cler.name<<"\n";
    cout<<"Age is "<<cler.age<<"\n";
    cout<<"Current location: "<<cler.home<<"\n";

    cout<<"sum of x&y is "<<g.func(15,90)<<"\n";
    g.func2();
    cout <<'\n'<<'\n';
    
    Car car1("BMW","X5",1888);
    Car car2("VW","Golf 8",2022);
    cout<<car1.brand<<" "<<car1.model<<" "<<" "<<car1.year<<"\n";
    
    Private myobject;
    myobject.x = 50;
    //myobject.y = 555
    //cout<< myobject.y<<"\n"; //not allowed
    cler.func2();
    cout<<"\n";
    string food = "Pizza";
    string &meal = food;
    
    cout << &food <<'\n';
    cout << &meal <<'\n';
    cout << &cler <<'\n'; 
    return 0;
}
