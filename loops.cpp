#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int i=1;
    while(i<n){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";

    //sum of n nos
    int sum=0;
    int j=1,no;
    cout<<"Enter no: ";
    cin>>no;

    while(j<=no){
        sum=sum+j;
        j++;
    }
    cout<<"sum of "<<no<<" nos is "<<sum<<endl;

    //sum of all even nos
    int sum1=0;
    int k=1,n1;
    cout<<"enter n: ";
    cin>>n1;
    while(k<=n1){
        if(k%2==0){
            sum1=sum1+k;
        }
        k++;
    }
    cout<<"sum of even nos is "<<sum1<<endl;

    //if prime or not
    int x=2,n2;
    cout<<"enter no to check if prime: ";
    cin>>n2;
    while(x<n2){
        if(n2%x!=0){
            cout<<n2<<" is prime"<<endl;
            break;
        }
        else{
            cout<<n2<<" is not prime"<<endl;
            break;
        }
    x++;
    }
}