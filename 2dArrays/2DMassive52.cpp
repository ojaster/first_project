#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%20;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        if(k[i][3]<=25){
            sum += k[3][i];
        }
    }
    cout<<sum<<endl;
}