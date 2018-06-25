#include <iostream>
#include <math.h>
using namespace std;

int main(){
    const int n=3;
    int k[n];
    int N[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        N[i] = abs(k[i]/10 - k[i]%10);
    }

    for(int i =0; i<n; i++){
        cout<<N[i]<<endl;
    }
   
}