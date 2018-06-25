#include  <iostream>
using namespace std;
int main(){
    int n,x=0,k=0;
    cin>>n;
    while(n>0){
         x=n%10;
        if(x%2!=0){
            k=k+x;
        }
        n=n/10;
        
        
    }
    cout<<k;
}