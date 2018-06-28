#include <iostream>
using namespace std;
int main(){
    const int n=10;
    int k[n];
    int N[5];
    int K[5];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    int j = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 == 0 ){
            N[j] = k[i];
            j++;
        } 
    }
    j = 0;
    for(int i = 0; i < n; i++){
        if(i % 2 != 0){
            K[j] = k[i];
            j++;
        }
    }

    cout<<"----"<<endl;
    for(int i=0; i<n/2; i++){
        cout<<K[i]<<endl;
    }
    
    cout<<"----"<<endl;
    for(int i=0; i<n/2; i++){
        cout<<N[i]<<endl;
    }
}