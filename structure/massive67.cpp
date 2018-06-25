#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    int min=99999,max=0;
    int index,index2;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(k[i]<min){
            min=k[i];
            index=i;
        }
        if(k[i]>max){
            max=k[i];
            index2=i;
        }
    }


    int left, right;
    if(index<index2){
        left = index;
        right = index2;
    }else{
        left = index2;
        right = index;
    }


    for(int i=left + 1; i<right; i++){
        k[i] = 0;
    }
    for(int i=0; i<n; i++){
       cout<<k[i]<<endl;
    }
    
}