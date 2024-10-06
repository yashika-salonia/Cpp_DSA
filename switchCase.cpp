#include<iostream>
using namespace std;
int main(){
    char temp='2';
    int deg=2;
    switch(temp){
        case '1':
            //2 prints in 1 case
            cout<<"chill temperature"<<endl;
            cout<<"wear warm clothes"<<endl;
            break;
        case '5':
            //1 more switch in 1 case
            switch(deg){
                case 2: 
                    cout<<"Value of temperature is: "<<deg<<endl;
                    break;
            }
            break;
        //checking two situations
        case '2':
        case '3':
            cout<<"mild cold weather"<<endl;
            break;
        default:
            cout<<"default"<<endl;
    }

    //using switch case in infinite loop
    int n=4;
    while(1){
        switch(n){
            case 4:
                cout<<"infinite loop"<<endl;
                // void exit();
                // break;
        }
        break;
    }
}