#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=3;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int maxSum,indexRow=-1;
    for(int j=0; j<n; j++){
         for(int i=0; i<n; i++){
                sum+=k[i][j];
         }  
         if(maxSum<sum || j==0){
             maxSum=sum;
             indexRow=j;
         } 
         sum=0;
    }
    cout<<maxSum<<endl;
    cout<<indexRow<<endl;
}