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

    //Storing variable with large storage than datatype storage capacity

    char w=123456;
    cout << w << endl; //display warning as well as the output with the @ sign as takes input as last bit value i.e. 64(@) in ascii)

    //by default int takes both +ve and -value
    int x=10,y=-2;
    cout << x << endl;
    cout << y << endl;

    //to print +ve value use unsigned with int
    unsigned int z=10;
    unsigned int p=-10;
    //both will have different value
    cout << z << endl; //10
    cout << p << endl; //4294967286 => huuge no bcoz it takes 1's compliment to make it +ve

    //Operators
    //Arithmetic operators => =,-,/,%,*
    //1. / operator => float/int = float and double/int = double
    int f=10,g=3;
    cout << f/g << endl; //3
    cout << 2.0/5 << endl; //0.4

    //Relational operators => =,<,>,<=,>=,!=
    int i=10,j=3;
    cout << bool(i<=j) << endl; //0
    cout << bool(i!=j) << endl; //1
    cout << bool(i<j) << endl; //0
    cout << bool(i>j) << endl; //1
    cout << bool(i>=j) << endl; //1
    cout << bool(i<=j) << endl; //0

    //Assignment operator => '=' used to asign value
    //Logical operator => &&, || ,!
    //Bitwise operator 
return 0;
}