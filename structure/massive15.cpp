#include <iostream>
using namespace std;
int main(){
    int k[6];
    int sum=0;
    for(int i =0; i<6; i++){
        cin>>k[i];
        sum = sum + k[i]*k[i]; // 2 3 4 : 2*2+3*3+4*4

    }
    cout<<sum;
}