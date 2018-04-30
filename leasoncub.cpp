#include <iostream>
using namespace std;
int main(){
    int n, i=1;
    cin>>n;
    while(i*i<n){ // пока квадрат числа меньше n
     cout<<i*i<<endl; //выводим на экран квадрат числа
     i=i+1;   // делаем новый шаг
    }
}