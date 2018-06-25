#include <iostream>
#include <fstream>
using namespace std;
const int N = 100;

int main(){
    int k[N], n;
    ifstream fpInput("ww1.txt"); //открываем файл на чтение
    fpInput>>n; //реальное количество элементов fpInput работает аналогично cin 
    for(int i = 0; i<n; i++){
        fpInput>>k[i];
        cout<<k[i]<<endl;
    }
    fpInput.close(); // закрываем файл после работы с ним, чтобы дать доступ другим приложениям к данному файлу
    cout<<endl;
    int temp = k[0];
    for(int i = 0; i < n - 1; i++){
        k[i] = k[i+1];
    }
    k[n-1] = temp;

     for(int i = 0; i < n ; i++){
        cout<<k[i]<<endl;
     }

}


// 5 6 7 8
// 6 7 8 8
// Запомнить первый элемент массива
//Все элементы начиная со второго сдвинуть влево
//На место последнего элемента массива записать первый(который мы запомнили)