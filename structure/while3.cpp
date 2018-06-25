#include <iostream>
using namespace std;
int main(){
    int x,k,sum=0;
    cin>>x;
    while(x!=0){
        k=x%10;
        if(k==4 && x%6==0){
            sum=sum+x;
        }
        cin>>x;
    }
        cout<<sum;
    
}