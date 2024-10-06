#include <iostream>
#include <string>
using namespace std;
int main(){
    string arr="45712";
    int len=arr.length();
    int count=0;
    int k=6;
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if((arr[i]-'0')+(arr[j]-'0')==k){
                cout<<"["<<arr[i]<<","<<arr[j]<<"]"<<endl;
                count++;
            }
        }
    }
    cout<<"No of pairs: "<<count<<endl;
    return 0;
}