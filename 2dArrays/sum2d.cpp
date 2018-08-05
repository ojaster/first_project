#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int const n=5;
    int k[n][n];
    int sum=0;
 for(int i=0; i<n; i++){
     for(int j=0; j<n; j++){
            k[i][j] = rand()%45-30;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int h=0;
    for(int i=0; i<n; i++){
        h++;
        sum=k[h-1][0]+k[h-1][1]+k[h-1][2]+k[h-1][3]+k[h-1][4];
        cout<<sum<<endl;
        sum=0;
        
    }
}