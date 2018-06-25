#include <iostream>
using namespace std;

struct part{ // объявление структуры
    int modelNumber; // номер модели изделия
    int partNumber; // номер детали
    float cost; // стоимость детали
};

int main(){
    part part1 = {6244, 373, 217.55}; //определили структурную переменную 
    part part2;
    //вывод значений полей на экран
    cout<<"Модель:"<<part1.modelNumber;
    cout<<" деталь:"<<part1.partNumber;
    cout<<" стоимость $ "<<part1.cost<<endl;

    part2 = part1;

    //вывод значений полей на экран
    cout<<"Модель:"<<part2.modelNumber;
    cout<<" деталь:"<<part2.partNumber;
    cout<<" стоимость $ "<<part2.cost<<endl;
}