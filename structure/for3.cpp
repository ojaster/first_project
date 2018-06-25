#include <iostream>
using namespace std;
int main(){
    int n,x,k=0,a=0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        k=x%10;
        if(k==3){
            a++;
        }
    }
    cout<<a;
}