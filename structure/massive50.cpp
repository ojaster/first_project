#include <iostream>
using namespace std;
 int main(){
     int const n =5;
     int k[n];
     int index;
     int min=99999999;
     for(int i=0; i<n; i++){
         cin>>k[i];
     }
     for(int i=0; i<n; i++){
        if(k[i]<min){
            min=k[i];
            index = i;
        }
    }
    k[index]*=3;

    int temp = k[n-1];
    k[n-1] = k[index];
    k[index] = temp;

    cout<<"-------"<<endl;

    for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }
 }