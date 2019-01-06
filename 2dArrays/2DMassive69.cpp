#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    int mas=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
         for(int i=0; i<n; i++){
                mas=k[i][2]*k[i][2];
                cout<<k[i][2]<<endl; 
            }
             
            cout<<mas<<endl;
         if(mas>99){
             cout<<"yes"<<endl;
         }else{
             cout<<"no"<<endl;
        }
}