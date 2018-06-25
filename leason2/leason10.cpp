#include <iostream>
using namespace std;
int main(){
    int n, k=0, x=0;
    cin>>n;
    while(n>0){
        x=n%10;
        if(x%2!=0){
           k++;
        }
        n=n/10;
    }
    cout<<k;
}