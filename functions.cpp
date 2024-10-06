#include<iostream>
using namespace std;

//1 power function
int power(int a,int b){
    cout<<"Enter the base number: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}

//2 even-odd function
int even_odd(int num){
    cout<<endl<<"enter no: ";
    cin>>num;
    if(num%2==0){
        cout<<"The number is even."<<endl;
    }
    else{
        cout<<"The no is odd"<<endl;
    }
}

//3 how to find nCr=n!/r!*(n-r)!
int factorial(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int nCr(int n, int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    return ans;
}

//is Prime or not
void isPrime(int no){
    int flag = 1;
    for(int i=2;i<no;i++){
        if(no%i==0){
            flag=0;
        }
    }
    if(flag){
        cout<<no<<" is a prime number"<<endl;
    }
    else{
        cout<<no<<" is not a prime number"<<endl;
    }
}

int main(){
    //power
    int a,b;
    int ans=power(a,b);
    cout<<"Power: "<<ans<<endl;
    
    //even-odd
    int num;
    even_odd(num);
    
     //nCr
    int n,r;
    cout<<"enter n: ";
    cin>>n;
    cout<<"enter r: ";
    cin>>r;
    cout<<"Answer: "<<nCr(n,r)<<endl;

    //isPrime
    int no;
    cout<<"enter number to check prime: ";
    cin>>no;
    isPrime(no);

}