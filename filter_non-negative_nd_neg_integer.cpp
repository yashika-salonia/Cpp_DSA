#include <iostream>
using namespace std;

int main() {
    int a[8]={-4,-1,-2,3,4,-3,5,6};
    int temp,s[8];
    for(int i=0;i<=7;i++){
        for(int j=i+1;j<=7;j++){
            if(a[i]<0 && a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;  
                s[i]=a[i];
                cout<<s[i]<<"if"<<endl;
            }
            else if(a[i]<0 && a[i]<a[i+1]){
                s[i]=a[i];
                cout<<s[i]<<"else"<<endl;

            }
        }
    }
    // for(int i=0;i<=7;i++){
    //     cout<<s[i]<<" ";
    // }
}