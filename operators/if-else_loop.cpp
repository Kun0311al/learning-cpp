#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter your age:"<<endl;
    cin>>a;
    if(a>=18 && a<=120){
        cout<<"you are now mature..!"<<endl;
    }
    else(a<18){
        cout<<"you are child..."<<endl;
    }
    else(a>120){
        cout<<"please enter valid age..."<<endl;
    }
    return 0;
}