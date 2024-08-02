#include<iostream>
using namespace std;
int main(){

    //Numeric pattern printing

    /* pattern-1
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
        1 2 3 4 
    */
    int i,j,n;
    cout<<"enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    /* pattern-2
        3 2 1 
        3 2 1 
        3 2 1 
    */
    int no;
    cout<<"enter n: ";
    cin>>no;
    for(i=1;i<=no;i++){
        for(j=1;j<=no;j++){
            cout<<(no-j+1)<<" ";
        }
        cout<<"\n";
    }

    /* pattern-3
        1   2   3 
        4   5   6 
        7   8   9
    */
    int n1;
    cout<<"enter n: ";
    cin>>n1;
    int count=1;
    i=1;
    while(i<=n){
        j=1;
        while(j<=n){
            cout<<count<<"\t";
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern-4
       *
       * *
       * * *
       * * * *
    */
    int n2;
    cout<<"enter n: ";
    cin>>n2;
    i=1;
    while(i<=n2){
        j=1;
        while(j<=i){
            cout<<"* ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern-5
        1
        2 2
        3 3 3
        4 4 4 4 
    */
    int n3;
    cout<<"enter n: ";
    cin>>n3;
    i=1;
    while(i<=n3){
        j=1;
        while(j<=i){
            cout<<i<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern-6
        1
        2 3
        4 5 6
        7 8 9 10
    */
    int n4;
    cout<<"enter n: ";
    cin>>n4;
    i=1;
    count=1;
    while(i<=n4){
        j=1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern-7
        1
        2 3
        3 4 5
        4 5 6 7
    */
    int n5;
    cout<<"enter n: ";
    cin>>n5;
    i=1;
    while(i<=n5){
        j=1;
        count=i;
        //w/o count we can write with 2 solutions
        //1. while(j<2*i){
        while(j<=i){
            //cout<<(i+j-1);
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }

    /* pattern-8
        1
        2 1
        3 2 1
        4 3 2 1
    */
    int n6;
    cout<<"enter n: ";
    cin>>n6;
    i=1;
    while(i<=n5){
        j=1;
        count=i;
        while(j<=i){
            //w/o count we can use condition i.e.
            //cout<<(i-j+1);
            cout<<count<<" ";
            count--;
            j++;
        }
        cout<<"\n";
        i++;
    }
    return 0;
}