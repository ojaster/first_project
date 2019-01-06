#include <iostream>
using namespace std;
int main(){
    const int n=5;
    int k[n];
    for(int i=0; i<n; i++){
      cin>>k[i];
    }
    int max=0,min=999999999;
    cout<<"----"<<endl;
    int indexMinElement = -1, indexMaxElement =- 1;
    for(int i=0; i<n; i++){
      if(k[i]<min){
          min = k[i];
          indexMinElement = i;
      }
      if(k[i]>=max){ //находим последний максимум в массиве
          max = k[i];
          indexMaxElement = i;
      }
    }
    
    int temp = k[indexMaxElement];
    k[indexMaxElement] = k[indexMinElement];
    k[indexMinElement] = temp;
    
    for(int i=0; i<n; i++){
      cout<<k[i]<<endl;
    }
}