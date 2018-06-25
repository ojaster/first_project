#include <iostream>
using namespace std;
int main(){
    int km = 10,d=1;
    float a;
    cin>>a;
    while(km<11) {
        km = km + a * km;
        d++;
    }
    cout<<d<<" "<<km;

}