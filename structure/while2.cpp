#include <iostream>
using namespace std;
int main(){
    int n=0,x;
    cin>>x;
    while(x!=0){
        if(x%2==0 && x%5==0){
            n++;
        }
        cin>>x;
    }
    cout<<n;
}