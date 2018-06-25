#include <iostream>
using namespace std;
int main(){
    const int n=7;
    int k[n];
    int N[n];
    for(int i =0; i<n; i++){
        cin>>N[i];
    }
    int j = 0;
    for(int i =0; i<n; i++){
        if(N[i]<0){
            k[j]=N[i];
            j++;
        }
    }

     for(int i =0; i<n; i++){
        if(N[i]==0){
            k[j]=N[i];
            j++;
        }
    }

     for(int i =0; i<n; i++){
        if(N[i]>0){
            k[j]=N[i];
            j++;
        }
    }
    for(int i =0; i<n; i++){
        cout<<k[i]<<endl;
    }
}