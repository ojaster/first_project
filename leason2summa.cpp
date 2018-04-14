#include <iostream>
using namespace std;
int main(){
    int a,b,r1,r2;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    r1=a*a+b*b;
    r2=(a+b)*(a+b);
    if(r1>r2){
        cout<<"r1=win"<<endl;
    }else{
        cout<<"r2=win"<<endl;
    }
}