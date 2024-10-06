#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"Enter the amount of money you have: ";
    cin>>amt;
    // to find how many notes of 100,50,20,1 the amount 1330 can be made up of

    //this is through if-else
    if(amt>=100){
        int hund=amt/100;
        cout<<"no of hundred rupees note: "<<hund<<endl;
        amt%=100; //30 out of 1330
    }
    if(amt>=50){
        int fifty=amt/50;
        cout<<"no of fifty rupees note: "<<fifty<<endl;
        amt-=50;
    }

    if(amt>=20){
        int twenty=amt/20;
        cout<<"no of twenty rupees note: "<<twenty<<endl;
        amt-=20;
    }
    if(amt>=1 && amt!=0){
        int one=amt/1;
        cout<<"no of one rupees note: "<<one<<endl;
    }

    //through switch cases => think and do it tomorrow
    /*
    switch(amt){
        case amt>=100:
            int hund=amt/100;
            cout<<"no of hundred rupees note: "<<hund<<endl;
            amt%=100; //30 out of 1330
        case amt>=50: 
            int fifty=amt/50;
            cout<<"no of fifty rupees note: "<<fifty<<endl;
            amt-=50;
        case amt>=20:
            int twenty=amt/20;
            cout<<"no of twenty rupees note: "<<twenty<<endl;
            amt-=20;
        case amt>=1 && amt!=0:
            int one=amt/1;
            cout<<"no of one rupees note: "<<one<<endl;
    }
    */

    // while (amt > 0) {
    //     switch (amt / 100) {
    //         case 0:
    //             switch (amt / 50) {
    //                 case 0:
    //                     switch (amt / 20) {
    //                         case 0:
    //                             int one = amt / 1;
    //                             cout << "no of one rupees note: " << one << endl;
    //                             amt -= one;
    //                             break;
    //                         default:
    //                             int twenty = amt / 20;
    //                             cout << "no of twenty rupees note: " << twenty << endl;
    //                             amt -= twenty * 20;
    //                             break;
    //                     }
    //                     break;
    //                 default:
    //                     int fifty = amt / 50;
    //                     cout << "no of fifty rupees note: " << fifty << endl;
    //                     amt -= fifty * 50;
    //                     break;
    //             }
    //             break;
    //         default:
    //             int hund = amt / 100;
    //             cout << "no of hundred rupees note: " << hund << endl;
    //             amt -= hund * 100;
    //             break;
    //     }
    // }
    return 0;
}
