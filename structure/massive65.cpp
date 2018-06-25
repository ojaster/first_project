#include <iostream>
using namespace std;
int main(){
    int const n=2;
    int k[n];
    int sum=0;
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    for(int i=0; i<n; i++){
        sum = sum + k[i] % 10 + k[i] / 10;
    }
    cout<<sum<<endl;
    
}