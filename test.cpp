#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"enter n: ";
    cin>>n;
    // while(i<=n){
    //     int j=n;
    //     while(j>=i){
    //         cout<<" * ";
    //         j--;
    //     }
    // cout<<endl;
    // i++;
    // }
    // while(i<=n){
    //     int j=1;

    //     if(i==1){
    //         while(j<=n){
    //             cout<<" * ";
    //             j++;
    //         }
    //     i++;
    //     }

    //     if(i==2){
    //         j=1;
    //         while(j<=n){
    //             cout<<" ";
    //             j++;
    //         }
    //     cout<<endl;
    //     i++;
    //     }
    // i++;
    // }
    for(i=1;i<=n;i++){
        for(int j=(i+1);j<=i;j++){
                cout<<" ";
        }
        for(int j=1;j<=5;j++){
            cout<<" * ";
        }
    cout<<endl;
    }
    cout<<endl;
}