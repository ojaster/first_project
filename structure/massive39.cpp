#include <iostream>
using namespace std;
int main(){
    int n=5;
    int k[n];
    int min=3000000,max=0;
    int indexMin, indexMax;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        if(min>k[i]){
            min=k[i];
            indexMin = i;
        }
        if(max<k[i]){
            max=k[i];
            indexMax = i;
        }
    }

    //swap
    k[indexMax] = min;
    k[indexMin] = max;

    for(int i=0;i<n; i++){
        cout<<k[i]<<endl;
    }
    
}