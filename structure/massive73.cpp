#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int sum=0,index,index2, r = 0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]<0){
            index=i;
            break;
        }
       
    }for(int i=0; i<n; i++){
        if(k[i]==0){
            index2=i;
            break;
        }
    }
    int l, r;
    if(index>index2) {
        l = index;
        r = index2;
    }else{
        l = index2;
        r = index;
    }
    for(int i = l; i < r; i++){
            sum += k[i];
            r++;
    }
    cout<<sum<<endl;
    cout<<r<<endl;
    
} 