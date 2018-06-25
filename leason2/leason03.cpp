#include <iostream>
using namespace std;
int main(){
    int n,x=0,max=0;
    cin>>n;
    while(n>0){
       x=n%10;
        if(x>max){
            max=x;
        }
       n=n/10;
    
    }
    cout<<max;
}