#include <iostream>
using namespace std;

struct part{ // объявление структуры
    int modelNumber; // номер модели изделия
    int partNumber; // номер детали
    float cost; // стоимость детали
};

int main(){
    part part1; //определили структурную переменную 
    part1.modelNumber = 6244; //инициализация полей
    part1.partNumber = 373;
    part1.cost = 270;
    //вывод значений полей на экран
    cout<<"Модель:"<<part1.modelNumber;
    cout<<" деталь:"<<part1.partNumber;
    cout<<" стоимость $ "<<part1.cost;

}