#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i< n - 1; i++){
        for(int j = 0; j< n - i -1; j++){
            if(k[j]<k[j+1]){ // 
                int temp = k[j+1];
                k[j+1] = k[j];
                k[j] = temp;
            }
        }
    }   
    cout<<"-----"<<endl;
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
}