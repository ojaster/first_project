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
    for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
            if(k[i][j]%2==0){
                sum+=k[i][j];
            }
         }   
    }
    cout<<sum<<endl;
}