#include <iostream>
using namespace std;
struct Distance{
    int ft;
    float inch;
};
int main(){
    Distance d1, d3;
    Distance d2 = {11,6.25};
    //ввод полей переменной d1
    cout<<"\n Введите число футов:"; cin>> d1.ft;
    cout<<"\n Введите число дюймов:"; cin>> d1.inch;
    //сложение длин d1 и d2  и присвоим результат в d3
    d3.inch = d1.inch + d2.inch; //сложение дюймов
    d3.ft = 0; // с возможным заемом
    if(d3.inch >= 12){ //если сумма больше 12
        d3.inch -= 12; //число дюймов уменьшаем на 12
        d3.ft++; //увеличиваем число футов на 1
    }

    d3.ft += d1.ft + d2.ft; //сложение футов
    
    //d3 = d1 + d2; //некорректное действие
    
    //вывод всех длин на экран
    cout<<"("<<d1.ft<<" - "<<d1.inch<<" + ";
    cout<<d2.ft<<" - "<<d2.inch << " = ";
    cout<<d3.ft<<" - "<< d3.inch << "\n";
}