#include<iostream>
#include<math.h>
using namespace std;
int main(){

//decimal to binary conversion
    int n;
    cout<<"enter n: ";
    cin>>n;
    int ans=0;
    int i=0;
    while(n!=0){
        int bit=n&1;
        // cout<<"bit: "<<bit<<endl;
        ans=(bit* pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<"ans: "<<ans<<endl; // 101 

//-6 decimal to binary
    int n2=-6;
    cout<<"enter n: ";
    cin>>n2;
    int ans2=0;
    if(n2<0){
        n2=pow(2,16)+n;
    }
    cout<<n2<<endl;
    while(n2){
        int lastbit=n2&1;
        ans=(pow(10,i)+lastbit)+ans2;
        n2=n2>>1;
        i++;
        // cout<<ans2<<endl;
    }
    cout<<ans2<<endl;
    
    
//binary to decimal conversion
    int n3;
    cout<<"enter n: ";
    cin>>n3;
    int ans3=0;
    int i=0;
    while(n3!=0){
        int digit=n3%10;
        if(digit==1){
            ans3=ans3+pow(2,i);
        }
        n3=n3/10;
        i++;
    }
    cout<<ans3<<endl;
}