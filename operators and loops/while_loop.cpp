#include<iostream>
using namespace std;
int main(){
    int a,b=0,c=1;
    cout<<"enter a number: "<<endl;
    cin>>a;
    while(c<=a){
        b=b+c;
        c=c+1;
    }
    cout<<"sum of the numbers: "<<b<<endl;
    return 0;
}