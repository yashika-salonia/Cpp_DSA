#include<iostream>
using namespace std;
int main(){

    int a=4,b=6;
    //bitwise operators 
    cout<<"a&b: "<< (a&b) <<endl ; //4
    cout<<"a|b: "<< (a|b) <<endl ; //6
    cout<<"~b: "<< (~b) <<endl ; //-7
    cout<<"a^b: "<< (a^b) <<endl ; //2

    //left shift operator
    cout<< "left shift of a: "<<(a<<1)<<endl; //8
    cout<< "left shift of 342: "<<(342<<1)<<endl; //684
    cout<< "left shift of 19 "<<(19<<1)<<endl; //38
    cout<< "left shift of 21 "<<(21<<2)<<endl; //84

    //right shift operator
    cout<< "right shift of 3: "<<(3>>1)<<endl; //1
    cout<< "right shift of -3: "<<(-3>>1)<<endl; //-2
    cout<< "right shift of 72: "<<(72>>3)<<endl; //9
    cout<< "right shift of 17 "<<(17>>1)<<endl; //8
    cout<< "right shift of 17 "<<(17>>2)<<endl; //4

    //post-increment and pre-increment
    int i=2;
    cout<< "i++: "<<i++<<endl; //2 as i is first printed and then the i++ increases it as i=3
    cout<<"++i: "<<++i<<endl; //4 as previous is 3 and firstly its incremented and then printed
    //similar is with post-decrement (i--) and pre-decrement (--i)

    //Questions for practice:
    //Q1.
    int x,y=1;
    x=10;
    if(++x)
        cout<<y;
    else
        cout<<++y;
    //1

    //Q2.
    a=1,b=2;
    if(a-- >0 && ++b>2){
        cout<<"inside if"<<endl;
    }
    else{
        cout<<"inside else";
    }
    cout<<a<<" "<<b<<endl;
    //inside if 0 3

    //Q3.
    a=1,b=2;
    if(a-- >0 || ++b>2){
        cout<<"inside if"<<endl;
    }
    else{
        cout<<"inside else";
    }
    cout<<a<<" "<<b<<endl;
    //inside if 0 2

    //Q4.
    int number=3;
    cout<<(25*(++number))<<endl;
    //100

    //Q5.
    a=1,b=a++;
    int c=++a;
    cout<<b<<endl; //1
    cout<<c<<endl; //3
}