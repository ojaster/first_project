#include <iostream>
using namespace std;
int main(){
    int x,k,n=0;
    cin>>x;
    
    while(x!=0){
        
        k=x%10;
        if(k==4 && x%3==0){
            n++;
        }
        cin>>x;
    }
     cout<<n;
    
}