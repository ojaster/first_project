#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int k[n];
    for(int i =0; i<n; i++){
        cin>>k[i];
    }
    for(int i =0; i<n; i++){
        k[i]= (k[i]%10*10) + k[i]/10 ;
        cout<<k[i];
        cout<<endl;
    }
}