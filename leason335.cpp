#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
     for(int i=a;i<=b; i++){ // sqrt(81)=9 , sqrt(9)=3 
        int res = sqrt(i); // sqrt(4) =2
        if(res * res == i){
            cout<<i<<endl;
        }
    }
}