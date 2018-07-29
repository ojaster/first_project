#include <iostream>
#include <stdlib.h>
using namespace std; 

const int M = 5; // число столбцов
const int N = 5; // число строк

int main(){
    int a = 1, b = 10;
   int i , j , A[N][M];
   //Заполнение рандомными числами
   for(j=0; j<M; j++) { // j -  стобцы , i - строками
        for(i = 0; i < N; i++) {
            A[i][j] = random() % (b-a+1) + a; //заполнение будет в интервале -> [a, b]
        }
   }
    
    //Выыод на экран матрицы
    for(int i = 0; i< N; i++) { // цикл по строкам 
        for(int j = 0; j< N; j++) { //вывод одной строки в цикле
            cout<<A[i][j]<<"\t";//разделяем числа символом табуляции
        }
        cout<<endl;//переход на новую строку
    }

    cout<<"----------"<<endl;
    //Перебрать элементы матрицы - найдем минимальный элемент и его индексЫ
    int rowIndex = -1, columnIndex = -1, min = b;
    for(int i = 0; i< N; i++) { // цикл по строкам 
        for(int j = 0; j< N; j++) { //вывод одной строки в цикле
            if(A[i][j] < min) {
                min = A[i][j];
                rowIndex = i;
                columnIndex = j;
            }
        }
    }

    cout<<"Минимальный элемент = "<<min<<endl;
    cout<<"Строка="<<rowIndex<<endl;
    cout<<"Столбец="<<columnIndex<<endl;

    //Вывод элементов главной диагонали
    cout<<"Элементы главной диагонали:";
    for(int i=0; i<N; i++){
        cout<<A[i][i]<<"\t";
    }
    cout<<"----"<<endl;
     for(int i=0; i<N; i++){
        cout<<A[i][N-1-i]<<"\t";
    }

    //ниже побочной
    for(int i=0; i<N; i++){
        for(int j=N-1-i; j<N; j++){
            A[i][j] = 0;
        }
    }

    //выше главной
    for(int i=0; i<N; i++){
        for(int j=0; j<i; j++){
            A[i][j] = 0;
        }
    }
    
    cout<<"----"<<endl;
    //Выыод на экран матрицы
    for(int i = 0; i< N; i++) { // цикл по строкам 
        for(int j = 0; j< N; j++) { //вывод одной строки в цикле
            cout<<A[i][j]<<"\t";//разделяем числа символом табуляции
        }
        cout<<endl;//переход на новую строку
    }
    
}