#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number: "<<endl;
    cin>>a;
    b=1;
    cout<<"five numbers after your number: "<<endl;
    do{
        a++;
        cout<<a<<endl;
        b++;
    }
    while(b<=5);
    return 0;
}