#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=10;
    int k[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            k[i][j] = rand()%20;
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
    
    int s;
    cout<<"----"<<endl;
    cin>>s;
    cout<<"----"<<endl;
    for(int i = 0; i < n; i++){   
        cout<<k[i][s-1]<<"\n"; //  вывод столбца под номером s 
    }
}