#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    const int n=20;
    int k[n];
    for(int i=0; i<n; i++){
        k[i]=rand()%20; // 0.....19
        cout<<k[i]<<endl;
    }

    //  Меянем местами первый и последний элементы
    int temp =  k[n -1];//в temp сохраняем последний элемент
    k[n-1]=k[0];//на место последнего элемента ставим первый элемент
    k[0]=temp;//на место первого элемента записываем temp
    //Меняем предпоследний и второй элемент местами
    temp = k[n-2];
    k[n-2]=k[1];
    k[1]=temp;

    temp = k[n-3];
    k[n-3]=k[2];
    k[2]=temp;
    
    cout<<"Answer:"<<endl;
    //вывод всего массива
    for(int i=0; i<n; i++){
        cout<<k[i]<<endl;
    }

}
