#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int const n=10;
    int k[n][n];
    int sum=0;

    for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            k[i][j] = rand()%45-30;
            cout<<k[i][j]<<"\t";
         }
        cout<<endl;
    }
    
    for(int j=0; j<n; j++){
       sum+=k[3][j];
    }
    cout<<sum<<endl;
}