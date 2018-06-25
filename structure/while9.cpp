#include <iostream>
using namespace std;
int main() {
    int k,x,sum=0;
    cin>>x;
    while(x != 0) {
        k = x % 10;
        if(k == 0 && x % 7 == 0) {
            sum = sum + x;
        }
        cin>>x;
    }
    cout<<sum;
    
}
