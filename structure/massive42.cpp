#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=10;
    int k[n];
    for(int i=0; i<n; i++){
        k[i]=rand()%n + 1 ; // 0.....19
        cout<<k[i]<<endl;
    }
    cout<<"---------"<<endl;

   
    int number;
    //найти индекс максимального элемента
    int max=0;
    for(int i=0; i<n; i++){
        if(max<k[i]){
            max=k[i];
            number = i;//индекс максимального элемента
        }
    }

    int indexDelete = number;
    for(int i = indexDelete; i < n - 1; i++){
         k[i] = k[i+1];  // 2 3 4 5 
    }
    k[n-1] = 0; //так как элемент удалился

    //вывод на экран
     for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }
}