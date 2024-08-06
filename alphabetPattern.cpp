#include<iostream>
using namespace std;
int main(){

    /* pattern-1
        A A A
        B B B
        C C C
    */
    int i=1,n;
    
    char ch='A';
    // cout<<"enter n: ";
    // cin>>n;
    // while (i<=n){
    //     int j=1;
    //     while(j<=n){
    //         cout<<ch<<" ";
    //         // w/o taking ch='A' we can use this formula
    //         // char a=('A'+i-1);
    //         // cout<<a<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     ch++;
    //     i++;
    // }

    // /* pattern-2
    //     A B C
    //     A B C
    //     A B C
    // */
    // int n1;
    // cout<<"enter n: ";
    // cin>>n1;
    // i=1;
    // while (i<=n1){
    //     int j=1;
    //     while(j<=n1){
    //         char a='A'+j-1;
    //         cout<<a<<" ";
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }
    
    // /* pattern-3
    //     A B C
    //     D E F
    //     G H I
    // */
    // int n2;
    // i=1;
    // cout<<"enter n: ";
    // cin>>n2;
    // char start='A';
    // while (i<=n2){
    //     int j=1;
    //     while(j<=n2){
    //         cout<<start<<" ";
    //         j++;
    //         start++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /* pattern-4
    //     A B C
    //     B C D
    //     C D E
    // */
    // int n3;
    // cout<<"enter n: ";
    // cin>>n3;
    // i=1;
    // while (i<=n3){
    //     int j=1;
    //     while(j<=n3){
    //         ch='A'+(i+j-2);
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    // /* pattern-5
    //     A 
    //     B B 
    //     C C C
    // */
    // int n4;
    // cout<<"enter n: ";
    // cin>>n4;
    // i=1;
    // while(i<=n4){
    //     int j=1;
    //     while(j<=i){
    //         ch='A'+i-1;
    //         cout<<ch<<" ";
    //         j++;
    //     }
    // cout<<endl;
    // i++;
    // }

    // /* pattern-6
    //     A 
    //     B C 
    //     D E F
    //     G H I J
    // */
    // int n5;
    // cout<<"enter n: ";
    // cin>>n5;
    // i=1;
    // ch='A';
    // while(i<=n5){
    //     int j=1;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         ch++;
    //         j++;
    //     }
    //     cout<<endl;
    //     i++;
    // }

    // /* pattern-7
    //     A 
    //     B C 
    //     C D E 
    //     D E F G
    // */
    // int n6;
    // cout<<"enter n: ";
    // cin>>n6;
    // i=1;
    // while (i<=n6){
    //     int j=1;
    //     while(j<=i){
    //         ch='A'+(i+j-2);
    //         cout<<ch<<" ";
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    /* pattern-8
        D
        C D
        B C D 
        A B C D
    */
    // int n7;
    // cout<<"enter n: ";
    // cin>>n7;
    // i=1;
    // while (i<=n7){
    //     int j=1;
    //     ch='A'+n7-i;
    //     while(j<=i){
    //         cout<<ch<<" ";
    //         j++;
    //         ch++;
    //     }
    //     i++;
    //     cout<<endl;
    // }

    /* pattern-9
        A B C
        B C D 
        C D E 
    */
    int n8;
    cout<<"enter n: ";
    cin>>n8;
    i=1;
    while (i<=n8){
        int j=1;
        ch='A'+i-j;
        while(j<=n8){
            cout<<ch<<" ";
            j++;
            ch++;
        }
        i++;
        cout<<endl;
    }

}