#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    cout<<"enter a number: "<<endl;
    cin>>a;
    cout<<"get five numbers after your numbers:"<<endl;
    while(b<=5){
        a++;
        cout<<a<<endl;
        b++;
    }
    return 0;
}