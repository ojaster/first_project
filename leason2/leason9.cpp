#include <iostream>
using namespace std;
int main(){
    int n,x = 0,sum = 0,k = 4;
    cin>>n;
    while(n>0){
        x=n%10;
        if(x<k){
            sum=sum+x;
        }
        n=n/10;


    }
    cout<<sum;
}