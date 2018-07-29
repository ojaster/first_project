#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=4;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            //cin>>k[i][j];
            k[i][j] = rand()%20;
        }
    }
    cout<<"---"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    cout<<"---"<<endl;
    int indexRow, indexColumn;
    cout<<"Введите номер строки:";
    cin>>indexRow;

    cout<<"Введите номер столбца:";
    cin>>indexColumn;
    if(indexRow>0 && indexRow<=n && indexColumn>0 && indexColumn<=n){
        cout<<"result:"<<endl;
        cout<<k[indexRow-1][indexColumn-1]<<endl;
    }else{
        cout<<"not found!"<<endl;
    }
}