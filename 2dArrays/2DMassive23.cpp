#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int sum=0;
    const int n=5;
    int k[n][n];
    int a,b;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]= rand()%200-100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    if(k[0][4]%2!=0 || k[4][4]%2!=0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
}