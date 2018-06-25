#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int k[n];
    for(int i=0; i<n; i++){
        cin>>k[i];
    }
    int  j = n-1;
    //сохраняем индекс последнего элемента
    for(int i=0; i<n/2; i++){ //по половине массива
      //поменять местами i -й элемент и n-i местами
          int temp = k[j];
           k[j]=k[i];
           k[i] = temp;
           j--;
        }  

         for(int i=0; i<n; i++){
            cout<<k[i]<<endl;
        }           
}

    // 5 4 3 2 1