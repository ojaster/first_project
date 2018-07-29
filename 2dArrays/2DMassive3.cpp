#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=10;
    int k[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            k[i][j]=rand()%10;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    int index;
    int sum=0;
    int max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            sum+=k[i][j];
        }
        if(sum>max){
            max = sum;
            index=i;
        }
        sum = 0;
    }
    cout<<max<<endl;
    cout<<index<<endl;
}