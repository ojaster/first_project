#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%200;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int sum=0;
    for(int i=0; i<n; i++){
        if(k[i][4]<100){
            sum+=k[i][4];
        }
        
    }
    cout<<sum<<endl;
}