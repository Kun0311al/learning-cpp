#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter number between 0 to 9: "<<endl;
    cin>>a;
    if(a>=0 && a<=9){
        cout<<"your number is valid..!";
    }
    else{
        cout<<"enter valid number...";
    }
    return 0;
}