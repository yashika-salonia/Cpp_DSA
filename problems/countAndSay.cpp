#include <iostream>
#include<string>
using namespace std;
int main() {
    string a="3322211";
    cout<<"String: "<<a<<endl;
    int i,c=1;
    string result="";
    for(i=1;i<a.length();i++){
        if(a[i-1]==a[i]){
            c++;
        }
        else{
            result +=to_string(c)+a[i-1] + " " ;
            c=1;
        }
    }
    result += to_string(c)+a[a.length()-1];
    cout<<"Answer: "<<result<<endl;
    return 0;
}