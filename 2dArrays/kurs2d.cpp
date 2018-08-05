#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=8;
    int k[n][n];
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j]=rand()%200;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int courseNumber;
    cout<<"Input course number:";
    cin>>courseNumber;

    for(int j=0; j<n; j++){
        sum += k[courseNumber][j];
    }
    cout<<sum<<endl;
}