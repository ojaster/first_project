#include <iostream>
#include <stdlib.h>
using namespace std; 

const int M = 5; // число столбцов
const int N = 4; // число строк

int main(){
   int i , j , A[N][M];
   for(j=0; j<N; j++) {// по строкам таблицы
    for(i = 0; i < M; i++) {// цикл по столбцам
        cout<<"A["<<i<<"]"<<"["<<j<<"]"<<":";
        cin>>A[i][j];

    }

   }
    
}