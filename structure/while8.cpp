#include <iostream>
using namespace std;
int main(){
    int n,d;
    cout<<"total amount:";
    cin>>d;
    while(d>0){
        cout<<"input n:";
        cin>>n;
        if(n>=1 && n<=3){
            d = d - n;
        }
        cout<<"total amount:"<<d<<endl;
    }
}