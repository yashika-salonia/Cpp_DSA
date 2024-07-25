#include<iostream>
using namespace std;
int main(){

    //1st program in cpp
    cout << "hello world" << endl;

    //datatypes and variables

    //1. integer
    int a1 = 10;
    cout << a1 << endl;
    int size=sizeof(a1);
    cout << size << endl;

    //2. character type
    char b = 'v';
    cout << b << endl;
    char size1=sizeof(b);
    cout << size1 << endl;

    //3. boolean type
    bool c = true;
    cout << c << endl;
    bool size2=sizeof(c);
    cout << size2 << endl;

    //4. float type
    float d=10.5;
    cout << d << endl;
    float size3=sizeof(d);
    cout << size3 << endl;

    //5. double type
    double e=21.9;
    cout << e << endl;
    double size4=sizeof(e);
    cout << size4 << endl;

    //Printing the ascii value with alphabet and vice-versa
    int a='a';
    cout << a << endl;

    char ch=98;
    cout << ch << endl;

    //Storing variable with large storage han datatype storage capacity

    char w=123456;
    cout << w << endl; //display warning as well as the output with the @ sign as takes input as last bit value i.e. 64(@ in ascii)

return 0;
}