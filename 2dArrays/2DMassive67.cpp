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
    int MinSum=-1,indexRow=-1;
    for(int i=0; i<n; i++){
         for(int j=0; j<n; j++){
                sum+=k[i][j];
         }  
         if(MinSum>sum || MinSum==-1){
             MinSum=sum;
             indexRow=i;
         } 
         sum=0;
    }
    cout<<MinSum<<endl;
    cout<<indexRow<<endl;
}