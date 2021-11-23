#include<iostream>
using namespace std;

class Car{
    public:
    string company;
    string model;
    int year;
    Car(string x, string y, int z){
    company = x;
    model = y;
    year = z;
    }
};
int main(){
    Car carObj1("BMW", "M2", 2016);
    Car carObj2("Ford", "Mustang", 1969);
    cout<<carObj1.company<<" "<<carObj1.model<<" "<<carObj1.year<<"\n";
    cout<<carObj2.company<<" "<<carObj2.model<<" "<<carObj2.year<<"\n";
    return 0;
}