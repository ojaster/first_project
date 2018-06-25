#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int max=0, min=99999,sum=0,R;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]<min){
            min=k[i];
        }
    }
     for(int i=0; i<n; i++){
        if(k[i]>max){
            max=k[i];
        }
        
    }
    R=max-min;
    sum=max+min;
    cout<<"R="<<R<<endl;
    cout<<"sum="<<sum<<endl;
}