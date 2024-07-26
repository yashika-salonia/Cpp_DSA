#include<iostream>
using namespace std;
int main(){
    int a,b;

    //print if odd-even
    cout<<"Enter the no: ";
    cin>>a; //to take input from user
    if(a%2==0){
        cout<<"The no is even\n";
    }
    else{
        cout<<"The no is odd\n";
    }

    //print the greater out of 2 nos
    cout<<"Enter 1st and 2nd no";
    cin>> a>> b; //cin does not read space, tab and enter while inputting the numbers
    
    int c=cin.get();
    //similarly, we can use cin.get() to take input in form of space, tab and enter

    if(a<b){
        cout<<"2nd value is greater\n";
    }
    else if(a>b){
        cout<<"1st value is greater\n";
    }
    else{
        cout<<"Both values are equal\n";
    }

    //print if no is pos, neg or zero
    int x;
    cout<<"Enter the no: ";
    cin>>x;
    if(x>0){
        cout<<"The no is positive\n";
    }
    else if(x<0){
        cout<<"The no is negative\n";
    }
    else{
        cout<<"The no is zero\n";
    }

    //problems to find outputs
    //1.
    int y=9;
    if(y==9){
        cout<<"NINE ";
    }
    if(y>0){
        cout<<"POSITIVE ";
    }
    else{
        cout<<"NEGATIVE ";
    }
    //Output => NINE POSITIVE

    //2.
    int m=2;
    int n=m+1;
    if((m=3)==n){
        cout<<m;
    }
    else{
        cout<<m+1;
    }
    //output => 3

    //3. 
    int z=24;
    if(z>20){
        cout<<"Hello";
    }
    else if(z==24){
        cout<<"Byee";
    }
    else{
        cout<<"World";
    }
    cout<<z;
    //output => Hello

    //print if character is lowercase, uppercase or numeric
    char ch;
    cout<<"enter character: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"This is uppercase";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"This is lowercase";
    }
    else{
        cout<<"This is numeric";
    }
}