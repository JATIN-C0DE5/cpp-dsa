#include<iostream>
using namespace std;


int main(){
    int a,b;
    char c;
    cout<<"Enter value of A: "<<endl;
    cin>>a;
    cout<<"Enter value of B: "<<endl;
    cin>>b;
    cout<<"Enter operation: "<<endl;
    cin>>c;
    cout<<endl;
    switch(c){
        case '+':
        cout<<a+b<<endl;
        break;
        case '-':
        cout<<a-b<<endl;
        break;
        case '*':
        cout<<a*b<<endl;
        break;
        case '/':
        cout<<a/b<<endl;
        break;
        default:
        cout<<"Enter Correct operations ! "<<endl;
    }
}