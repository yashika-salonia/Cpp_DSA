#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter a: ";
    cin>>a;
    cout<<"enter b: ";
    cin>>b;

    char op;
    cout<<"enter the opeartion: ";
    cin>>op;

    switch(op){
        case '+': 
            cout<<"Addition: "<<(a+b)<<endl;
            break;
        case '-':
            cout<<"Subtraction: "<<(a-b)<<endl;
            break;
        case '*':
            cout<<"Multiplication: "<<(a*b)<<endl;
            break;
        case '/':
            cout<<"Division: "<<(a/b)<<endl;
            break;
        case '%':
            cout<<"Remainder: "<<(a%b)<<endl;
            break;
        default: cout<<"enter valid operator";
    }
    return 0;
}