#include <iostream>
using namespace std;
int main(){
    const int n=8;
    int h =0;
    int k[n][n];
    int number =1;

    for(int i=0; i<n; i++){
       for(int j=0; j<n; j++){
           k[i][j] = n*n;
       } 
    }

    for(int i=0;i<n/2;i++){
        for(int j = 0; j < n -i - i; j++){ //слева направо
            k[i][j+i]= number++;
        }
       
        for(int g=i+1; g<=n-1 -i ; g++){// сверху вниз
            k[g][n-1-i] = number++;
        } 
        
        for(int g=n-1-i-1; g>=i; g--){ //справа налево
            k[n-i-1][g] = number++;
        }
         
        for(int g=n-1-i; g>i+1; g--){ //снизу вверх
            k[g-1][i] = number++;
        }  
    }

    

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<k[i][j]<<"\t";
        }
        cout<<endl;
    }
}