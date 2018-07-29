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
    if(k[0][3]%2==0 || k[0][0]%2==0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    if(k[3][3]==0 || k[3][0]==0){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
     
}