#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=18;
    const int m=12;
    int k[n][m];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            k[i][j]=rand()%100;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int h;
    cin>>h;
         for(int i=0; i<n; i++){
                sum+=k[0][i];
                cout<<k[0][i]<<"#"<<endl; 
            }
             
            cout<<sum<<endl;
         if(sum>h){
             cout<<"yes"<<endl;
         }else{
             cout<<"no"<<endl;
        }
}