#include<iostream>
using namespace std;
int main(){
    int a[10],i;
    cout<<"enter the numbers in array:"<<endl;
    for(i=1;i<=10;i++){
        cin>>a[i];
    }
    cout<<"numbers in the array:"<<endl;
    for(i=1;i<=10;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}