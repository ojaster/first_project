#include <iostream>
#include <math.h>
using namespace std;
int main(){
    const int n = 8;
    int k[n];
    int sum = 0;
    for(int i =0; i<n; i++){
        cin>>k[i];   
    }
    for(int i =0; i<n; i++){
         sum += k[i] * pow(8,j); // j =[7,6,5,4,3,2,1,0] - степени k[i]- 1/0
         j--; //степень будет уменьшаться
    }
    cout<<sum<<endl;
}