#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int max=0;
    int g=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(k[i][j]>max){
              max = k[i][j];
          }
        }
       
    }
    cout<<endl;
    cout<<max<<endl;
    cout<<endl;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(k[i][j] == max){
              g++;
              break;
          }
        }
       
    }
    cout<<g<<endl;
}