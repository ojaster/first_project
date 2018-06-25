#include <iostream>
using namespace std;
int main(){
    const int n=3;
    int k[n];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    cout<<"---------"<<endl;

   

    int index1;
    int index2;
    for(int i = 0; i < n; i++){
        if(k[i]<0){
            index1 = i;
        }
    }
     int indexdelete = index1;
    for(int i = indexdelete; i < n - 1; i++){
         k[i] = k[i+1];  
    }
    k[n-1] = 0;
    for(int i = 0; i < n; i++){
        if(k[i]%2==0){
            index2 = i;
        }
    }
      int indexdelete2 = index2;
    for(int i = indexdelete2; i < n - 1; i++){
         k[i] = k[i+1];  
    }
    k[n-1] = 0;

     for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }
}