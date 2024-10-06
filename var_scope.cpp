#include<iostream>
using namespace std;
int main(){

    //variable scoping
    if(1){
        int b=2;
        cout<<b<<endl; //2
        if(1){
            int b=3;
            cout<<b<<endl; //3
            if(1){
                int b=4;
                cout<<b<<endl; //4
            }
        }
    }

}