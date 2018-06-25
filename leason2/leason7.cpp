#include <iostream>
using namespace std;
int main(){
    int n ,x = 0, min = 9;
    cin>>n;
   
    while(n > 0){
        x = n % 10;
        if(x < min){
            min = x; 
        }
        n = n / 10;  
       
    }
    cout<<min;
}