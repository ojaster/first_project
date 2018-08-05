#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=18,m=12;
    int k[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            k[i][j]=rand()%200;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){
        sum += k[i][5];
    }
    cout<<sum<<endl;
}

            //я  ф м а м и 
//иванов                 6
//петров                 5
//семенов                2
//михайлов               1