#include<iostream>
using namespace std;
int main(){
    /* pattern-1
           *
          **
         ***
        ****
    */
    int i=1,j,n;
    cout<<"enter n: ";
    cin>>n;
    while(i<=n){
        j=n-1;
        while(j>=i){
            cout<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-2
        ****
        ***
        **
        *
    */
    int n1;
    cout<<"enter n: ";
    cin>>n1;
    i=1;
    while(i<=n){
        j=n1;
        while(j>=i){
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-3
        ****
         ***
          **
           *
    */
    int n2;
    cout<<"enter n: ";
    cin>>n2;
    i=1;
    while(i<=n2){
        j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        j=n2;
        while(j>=i){
            cout<<"*";
            j--;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-4
        1111
         222
          33
           4
    */
    int n3;
    cout<<"enter n: ";
    cin>>n3;
    i=1;
    int count=1;
    while(i<=n3){
        j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        j=n3;
        while(j>=i){
            cout<<count;
            j--;
        }
        count++;
        cout<<"\n";
        i++;
    }
    /* pattern-4
           1
          22
         333
        4444
    */
    int n4;
    cout<<"enter n: ";
    cin>>n4;
    i=1;
    count=1;
    while(i<=n4){
        j=n4-1;
        while(j>=i){
            cout<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<count;
            j++;
        }
        count++;
        cout<<"\n";
        i++;
    }
    /* pattern-5
        1234
         234
          34
           4
    */
    int n5;
    cout<<"enter n: ";
    cin>>n5;
    i=1;
    // count=1;
    while(i<=n5){
        j=1;
        while(j<i){
            cout<<" ";
            j++;
        }
        j=n5;
        count=i;
        while(j>=i){
            cout<<count;
            count++;
            j--;
        }
        // count=1;
        // count++;
        cout<<"\n";
        i++;
    }
    /* pattern-6
           1
          23
         456
        78910
    */
    int n6;
    cout<<"enter n: ";
    cin>>n6;
    i=1;
    count=1;
    while(i<=n6){
        j=n6-1;
        while(j>=i){
            cout<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<count;
            count++;
            j++;
        }
        cout<<"\n";
        i++;
    }
}