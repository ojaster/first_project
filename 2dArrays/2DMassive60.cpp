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
    int h=0;
    for(int i=0; i<n; i++){
        if(k[i][4]%3==0){
            cout<<k[i][4]<<endl;
            sum+=k[i][4];
            h++;
        }
        
    }
    cout<<h<<endl;
    cout<<sum/h<<endl;
}