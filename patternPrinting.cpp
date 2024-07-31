#include<iostream>
using namespace std;
int main(){
    int i=1,j,n; 
    /* pattern 1
        * * * *
        * * * *
        * * * *
        * * * *
    */
    cout<<"Enter the number of rows: ";
    cin>>n;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern 2
        1 1 1
        2 2 2 
        3 3 3
    */
    int n1;
    cout<<"Enter the number of rows: ";
    cin>>n1;
    while(i<=n1){
        j=1;
        while(j<=n1){
            cout<<i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
}