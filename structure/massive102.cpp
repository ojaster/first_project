#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=10;
    int k[n];
    for(int i = 0; i < n; i++){
       k[i] = rand()%(b+1); // [0...b]
    } 
    
    for(int i = 0; i < n; i++) {
        if(k[i] % 3 == 0) {
            //найти сумму цифр  числа k[i]
            int sum = 0;
            while(k[i]>0){
                sum+=k[i]%10;
                k[i]/=10;
            }
            k[i]=sum;
        }
    }

    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){
         cout<<k[i]<<endl;   
    }
}
    