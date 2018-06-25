#include <iostream>
using namespace std;
int main(){
    int x,k,v=0,n=0;

    
   for (int i=0; i<8; i++){
        cin>>x;
        k=x%10;
        if(k==4 && x%3==0){
            n++;
        }
        
    }
     cout<<n;
    
}