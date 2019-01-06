#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int min;
    for(int i=0; i<n; i++){
        min=k[i][0];
         for(int j=0; j<n; j++){
            if(k[i][j]<min){
                 min=k[i][j];
            }
         }
         cout<<min<<endl;
    }
    int max;
    for(int i=0; i<n; i++){
        max=k[i][0];
         for(int j=0; j<n; j++){
            if(k[i][j]>max){
                 max=k[i][j];
            }
         }
         cout<<max<<endl;
    }
}