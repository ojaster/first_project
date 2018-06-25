#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    while(n!=0){
        if(n%8==0 && n<100 && n>9){
            sum=sum+n;
        }
        cin>>n;

    }
    cout<<sum;
}