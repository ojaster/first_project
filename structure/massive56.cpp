#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int const n = 5;
    int k[n];
    for(int i=0; i<n; i++){
        k[i]=rand()%n;
    }

   for(int i=0; i<n; i++){
      cout<<k[i]<<"\t";
    }
    cout<<endl;
    cout<<"--------"<<endl;

    int flag = 0;
    for(int i=0; i< n - 1; i++){
        flag = 0;
        for(int j = 0; j < n - i - 1; j++){
            if(k[j] < k[j + 1]){
                int temp = k[j + 1];
                k[j+1] =  k[j];
                k[j] = temp;
                flag = 1;// обмен был
            }
        }
        if(flag==0) {
            break;
        }
    }

    for(int i=0; i<n; i++){
      cout<<k[i]<<"\t";
    }
    cout<<endl;


}