#include<iostream>
#include<math.h>
using namespace std;
int main(){

    int n;
    cout<<"enter n: ";
    cin>>n;
    int flag=0;

    //some error in this method 
    
    int count=0;
    int no=n;
    while(n%2==0 && n/2!=1){
        n=n/2;
        count++;
        flag=1;
        if(n%2!=0){
            flag=0;
            break;
        }
    }
    if(flag){
        cout<<"power of 2 for "<<no<<" is "<<count<<endl;
    }
    else{
        cout<<"not power of 2"<<endl;
    }

    //calculating power method
    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans==n){
            flag=1;
        }
    }
    if(flag){
        cout<<n<<" lies in power of 2"<<endl;
    }
    else{
        cout<<n<<" does not lie in power of 2"<<endl;
    }

    //using previous value of answer
    int ans=1;
    for(int i=0;i<=30;i++){
        if(ans==n){
            cout<<n<<" lies in power of 2"<<endl;
            break;
        }
        if(ans<INT32_MAX/2){
            ans=ans*2;
            break;
        }
        else{
            cout<<n<<" does not lie in power of 2"<<endl;
        }
    }
}