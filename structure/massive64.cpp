#include <iostream>
using namespace std;
int main(){
    int const n=5;
    int x[n];
    int y[n];
    int s[n];
    cout<<"x:"<<endl;
    for(int i=0; i<n; i++){
        cin>>x[i];   
    }
    cout<<"-----"<<endl;
    cout<<"y="<<endl;
    for(int i=0; i<n; i++){
        cin>>y[i];
    }
    int amountArrayS = 0;
    int is_exist = 0;
    for(int i=0; i<n; i++) { // идем по массиву x
        for(int j=0; j<n; j++) { //идем по массиву y
            if(x[i] == y[j]) { //если элементы совпали
                is_exist = 1;//флаг = true, НАШЛИ
            }
        } //когда прошли по всему массиву y
        if(is_exist == 1) { //если элемент был найден в массиве y
            s[amountArrayS] = x[i]; //записываем его в массив s
            amountArrayS++; //количечество элементов в массиве s увеличивается
        }
        is_exist = 0;//снова опускаем флаг ( то есть элемент не найден )
    }
    cout<<"-----"<<endl;
    for(int i = 0; i < amountArrayS; i++){ //вывод массива s на экран
        cout<<s[i]<<endl;
    }
}