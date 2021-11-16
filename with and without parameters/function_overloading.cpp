#include<iostream>
using namespace std;
void area(int,int);
void area(float);
int main(){
    int l,b;
    float r;
    cout<<"enter length and breath of rectangle:"<<endl;
    cin>>l>>b;
    area(l,b);
    cout<<"enter the radius of circle: "<<endl;
    cin>>r;
    area(r);
}
void area(int l,int b){
    int are;
    are=l*b;
    cout<<"area of rectangle is: "<<are<<endl;
}
void area(float r){
    float d;
    float const pi=3.14;
    d=pi*r*r;
    cout<<"area of circle is : "<<d<<endl;
}