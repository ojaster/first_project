#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int h=0;
    for(int i=0; i<n; i++){
        if(k[i][4]<4){
            h++;
        }
        
    }
    cout<<h<<endl;
}