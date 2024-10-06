#include<iostream>
using namespace std;
int bitwiseComplement(int n){
    int ans=0;
    int mask=0;

    //edge case
    if(n==0){
        return 1;
    }

    while(n!=0){
        //right shift the no till it finally becomes 0
        //step2 to create a mask left shift the no and then check the last bit and or the last bit with 1 (|1)
        mask= (mask<<1)|1;
        cout<<"mask: "<<mask<<endl;
        n=n>>1;
        cout<<"n: "<<n<<endl;
        ans=(~n)&mask;
        cout<<"ans: "<<ans<<endl;
    }
    return ans;
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    bitwiseComplement(n);
    // cout<<bitwiseComplement(n);
}