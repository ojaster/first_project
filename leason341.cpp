#include <iostream>
using namespace std;
int main(){
    int x,k=0;
    cin>>x;
    for(int i=1;i<=x; i++){
        if(x%i==0){
           k++;
           
        }
        
    }
    cout<<k;
}