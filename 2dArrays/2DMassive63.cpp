#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%100-101;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int max=k[0][3];
    for(int i=0; i<n; i++){
        if(k[i][3]>max){
            max=k[i][3];
        }
        
    }
    cout<<max<<endl;
}