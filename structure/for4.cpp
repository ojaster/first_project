#include <iostream>
using namespace std;
int main(){
    int n,x,min=30000;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(x<min && min%3==0 ){ 
        min=x;
        }
    }
    cout<<min;
}
