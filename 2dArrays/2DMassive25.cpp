#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int sum=0,sum2=0,sum3=0;
    int g;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    sum=k[0][3] + k[3][0];
    cout<<sum<<endl;
    sum2=k[3][0] + k[3][3];
    sum3=sum+sum2;
    sum3=sum3/4;
    cout<<sum3<<endl;
}