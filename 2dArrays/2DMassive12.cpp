#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=5;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%60;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
int indexRow1,indexColumn1;
cout<<"----input row1:"<<endl;
cin>>indexRow1;
cout<<"----input column1:"<<endl;
cin>>indexColumn1;

int indexRow2,indexColumn2;
cout<<"----input row2:"<<endl;
cin>>indexRow2;
cout<<"----input column2:"<<endl;
cin>>indexColumn1;

cout<<k[indexRow1-1][indexColumn1-1] << "\t"<< k[indexRow2-1][indexColumn2-1];

int temp;
temp = k[indexRow1-1][indexColumn1-1];
k[indexRow1-1][indexColumn1-1]  = k[indexRow2-1][indexColumn2-1];
k[indexRow2-1][indexColumn2-1] = temp;

cout<<"-------------"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){ 
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}