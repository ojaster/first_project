#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    while(a>0){
        int didgit=a%10;
        cout<<didgit;
        a=a/10;
    }
    
}