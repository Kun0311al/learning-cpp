#include<iostream>
using namespace std;
void fact(int);
int main(){
    int a;
    cout<<"enter a number: "<<endl;
    cin>>a;
    fact(a);
}
void fact(int a){
    int i=1,facto=1;
    while(i<=a){
        facto=facto*i;
        i=i+1;
    }
    cout<<"factorial of "<<a<<" is "<<facto;
}