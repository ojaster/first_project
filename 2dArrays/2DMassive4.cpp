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
    int index,index2;
   int max=k[0][0];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
          if(k[i][j]>max){
              max = k[i][j];
              index=i;
              index2=j;
          }
        }
        cout<<endl;
    }
    cout<<max<<endl;
    cout<<index<<endl;
    cout<<index2<<endl;
}