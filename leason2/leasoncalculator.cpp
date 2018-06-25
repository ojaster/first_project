#include <iostream>
using namespace std;
int main(){
    float a,b,r;
    int n;
    cout<<"n=";
    cin>>n;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    switch(n){
        case 1:
            r = a+b;
            cout<<"r="<<r<<endl;   
            break;
        case 2:
            r = a-b;
            cout<<"r="<<r<<endl;   
            break;
        case 3:
            r = a/b;
            cout<<"r="<<r<<endl;   
            break;
        case 4:
            r = a*b;
            cout<<"r="<<r<<endl;   
            break;
        default:
        cout<<"ERROR"<<endl;
        
    }
}