#include<iostream>
using namespace std;
int main(){

    //types of for loop usage
    //1
    for(int i=1;i<=5;i++){
        cout<<i<<" ";
    }
    cout<<endl;

    //2 without giving any parameters to for loop
    int i=1;
    for( ; ; ){
        if(i<=5){
            cout<<i<<" ";
        }
        else{
            break; //to exit the loop
        }
        i++;
    }
    cout<<endl;

    //3. with multiple variables
    for(int i=1,j=5;i<=5 && j>=1;i++,j--){
        cout<<i<<" "<<j<<endl;
    }

    //sum of n nos
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"Sum of "<<n<<" numbers is "<<sum<<endl;

    //fibonacci series
    int a=0,b=1;
    int temp;
    cout<<"Fibonacci series: ";
    for(int i=0;i<10;i++){
        cout<<a<<" ";
        temp=a+b;
        a=b;
        b=temp;
    }

    //Prime nos
    int num;
    bool isPrime=1;
    cout<<"Enter the number: ";
    cin>>num;
    for(int i=2;i<num;i++){
        if(num%i==0){
            // cout<<num<<" is not a prime number \n";
            isPrime=0;
            break;
        }
    }
    if(isPrime==1){
        cout<<num<<" is a prime number \n";
    }
    else{
        cout<<num<<" is not a prime number \n";
    }

    //use of continue;
    for(int i=1;i<=5;i++){
        if(i==3){
            continue;
        }
        cout<<i<<" ";
    } 
    //1 2 4 5

    //Questions for practice
    //Q1.
    for(int i=0;i<=5;i++){
        cout<<i<<" ";
        i++;
    }
    //0 2 4 

    //Q2.
    for(int i=0;i<=5;i--){
        cout<<i<<" ";
        i++;
    }
    //0 0 0 0 ..... (infinite loop)

    //Q3. 
    for(int i=0;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }
    //0 3 5 7 11 13 15  

    //Q4.
    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<"-"<<j<<" ";
        }
        cout<<endl;
    }
    //0-0 0-1 0-2 0-3 0-4 0-5
    //1-1 1-2 1-3 1-4 1-5
    //2-2 2-3 2-4 2-5
    //3-3 3-4 3-5
    //4-4 4-5
    //5-5


    //Q5.
    for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            if(i+j==10){
                break;
            }
            cout<<i<<"-"<<j<<" ";
        }
        cout<<endl;
    }
    //0-0 0-1 0-2 0-3 0-4 0-5
    //1-1 1-2 1-3 1-4 1-5
    //2-2 2-3 2-4 2-5
    //3-3 3-4 3-5
    //4-4 4-5

}