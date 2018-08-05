#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    const int m=n;
    int min=9999999;
    int k[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            k[i][j] = rand()%45-30;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(k[i][j]<min){
                min=k[i][j];
            }
        }
        
    }
    cout<<min<<endl;
}