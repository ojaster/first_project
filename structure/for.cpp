#include <iostream>
using namespace std;
int main(){
    int n,x,max=0;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(max<x  && x%5==0){
            max = x;  
        }
    }
    cout<<max;
}