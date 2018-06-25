#include <iostream>
using namespace std;
int main(){
    int a, m = 0;
    cout<<"a=";
    cin>>a;
    while (a>0){
        int digit = a%10;
        
           m=m+digit;
      
        a=a/10; 
    }
    cout<<m;
}