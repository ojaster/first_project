#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%60;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int h=0;
    for(int i=0; i<n; i++){
        if(k[i][2]>15){
            h++;
        }
        
    }
    cout<<h<<endl;
}