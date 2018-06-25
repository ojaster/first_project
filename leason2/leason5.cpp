#include <iostream>
using namespace std;
int main(){
    int n,a,x,k = 0;
    cout<<"a =";
    cin>>a;
    cout<<"N =";
    cin>>n;
    while(n > 0){
        x = n % 10;
        if(x==a){
            k++;
        }
        n=n/10;
    }
    cout<<k;
}