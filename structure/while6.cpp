#include <iostream>
using namespace std;
int main(){
    int a, max1, max2; // a- вводимые числа max2 - второй максимум max1 - глобальный макисмум
    cin>>a; //считываем первый раз число с клавиатуры
    max1 = a; //инициализируем глобальный макксимум
    max2 = a; //так как число в посл-ти пока одно , то оно яв-ся и вторым максимумом тоже
    while (a != 0){ // пока не введут ноль
        cin>>a;//считываем очередное число
        if(a>max1){//если оно больше чем глобальный максимум
            max2=max1; //сохраняем предвдущий максимум в max2
            max1=a;//меняем глобальный максимум на новый
        }
    }
    cout<<max2;
}