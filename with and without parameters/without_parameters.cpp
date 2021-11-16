#include<iostream>
using namespace std;
void add();
int main(){
    add();
}
void add(){
    int a,b,sum;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    sum=a+b;
    cout<<"sum = "<<sum;
}