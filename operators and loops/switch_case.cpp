#include<iostream>
using namespace std;
int main(){
    char c;
    int a,b;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"enter the operators between +,-,*,/,%:"<<endl;
    cin>>c;
    switch (c)
    {
    case + :
        cout<<"addition is: "<<a+b<<endl;
        break;
    case - :
        cout<<"subtraction is: "<<a-b<<endl;
        break;
    case * :
        cout<<"multiplication is: "<<a*b<<endl;
        break;
    case / :
        cout<<"division is: "<<a/b<<endl;
        break;
    case % :
        cout<<"modulus is: "<<a%b<<endl;
        break;
    
    default:
        cout<<"make valid choice...";
        break;
    }
}