#include <iostream>
using namespace std;
int main(){
    int k[100];
    int n,sum=0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>k[i];
        sum=sum+k[i];
    }
    
    if(sum>=100000 && sum <= 1000000){
        cout<<"true";
    }else{
        cout<<"false";
    }
    
}