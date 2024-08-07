#include<iostream>
using namespace std;
int main(){
    /* pattern-1
            *
          * *
        * * *
      * * * *
    * * * * *
    */
    int i=1,j,n;
    cout<<"enter n: ";
    cin>>n;
    while(i<=n){
        j=n-1;
        while(j>=i){
            cout<<" "<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<"*"<<" ";
            j++;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-2
        * * * *
        * * *
        * *
        *
    */
    int n1;
    cout<<"enter n: ";
    cin>>n1;
    i=1;
    while(i<=n){
        j=n1;
        while(j>=i){
            cout<<"*"<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-3
        * * * *
          * * *
            * *
              *
    */
    int n2;
    cout<<"enter n: ";
    cin>>n2;
    i=1;
    while(i<=n2){
        j=1;
        while(j<i){
            cout<<" "<<" ";
            j++;
        }
        j=n2;
        while(j>=i){
            cout<<"*"<<" ";
            j--;
        }
        cout<<"\n";
        i++;
    }
    /* pattern-4
        1 1 1 1
          2 2 2
            3 3
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
            cout<<" "<<" ";
            j++;
        }
        j=n3;
        while(j>=i){
            cout<<count<<" ";
            j--;
        }
        count++;
        cout<<"\n";
        i++;
    }
    /* pattern-4
              1
            2 2
          3 3 3
        4 4 4 4
    */
    int n4;
    cout<<"enter n: ";
    cin>>n4;
    i=1;
    count=1;
    while(i<=n4){
        j=n4-1;
        while(j>=i){
            cout<<" "<<" ";
            j--;
        }
        j=1;
        while(j<=i){
            cout<<count<<" ";
            j++;
        }
        count++;
        cout<<"\n";
        i++;
    }
    /* pattern-5
        1 2 3 4
          2 3 4
            3 4
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
            cout<<" "<<" ";
            j++;
        }
        j=n5;
        count=i;
        while(j>=i){
            cout<<count<<" ";
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
            2 3
          4 5 6
        7 8 9 10
    */
    int n6;
    cout<<"enter n: ";
    cin>>n6;
    i=1;
    count=1;
    while(i<=n6){
        j=n6-1;
        while(j>=i){
            cout<<" "<<" ";
            j--;
        }
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
            1 2 1
          1 2 3 2 1
        1 2 3 4 3 2 1
    */
    int n7;
    cout<<"enter n: ";
    cin>>n7;
    i=1;
    count=1;
    while(i<=n7){
        //printing space
        j=n7-1;
        while(j>=i){
            cout<<" "<<" ";
            j--;
        }
        //printing 1st triangle
        j=1;
        while(j<=i){
            cout<<j<<" ";
            j++;
        }
        //printing 2nd triangle
        j=1;
        count=i-1;
        while(j<=i-1){
            cout<<count<<" ";
            count--;
            j++;
        }
        cout<<endl;
        count++;
        i++;
    }
    
    /* pattern-7
        1 2 3 4 5 5 4 3 2 1
        1 2 3 4 * * 4 3 2 1
        1 2 3 * * * * 3 2 1
        1 2 * * * * * * 2 1
        1 * * * * * * * * 1
    */
    int n8;
    cout<<"enter n: ";
    cin>>n8;
    i=1;
    while(i<=n8){
        j=n8;
        count=1;
        while(j>=i){
            cout<<count<<" ";
            count++;
            j--;
        }

        j=1;
        while(j<=i-1){
            cout<<"*"<<" ";
            j++;
        }

        j=1;
        while(j<=i-1){
            cout<<"*"<<" ";
            j++;
        }

        j=n8;
        count=n8+1-i;
        while(j>=i){
            cout<<count<<" ";
            count--;
            j--;
        }
    cout<<endl;
    i++;
    }
}