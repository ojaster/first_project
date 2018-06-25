#include <iostream>
using namespace std;
int main(){
    int a = 0,n,x = 1, c;
    cin>>n;
    cout<<a<<" "<<x<<" ";
    for(int i = 0; i<n; i++){
        cout<<a+x<<" ";
        c = x;
        x = a + x;
        a = c;
    }
}