#include <iostream>
using namespace std;


struct Distance{ //длины в английской системе
    int feet;
    float inches;
};


struct Room{ //размеры прямоугольной команты
    Distance length; //длина
    Distance width; //ширина
};

int main(){
    Room dining; //переменная
    dining.length.feet =13 ; // задание параметров комнаты
    dining.length.inches = 6.5;

    dining.width.feet = 10;
    dining.width.inches = 0.0;

    //Преобразование длины и ширины в вещественный формат
    float l  = dining.length.feet + dining.length.inches/12;
    float w = dining.width.feet + dining.width.inches/12;

    //Вычисление площади команты
    cout<<"Площадь команты:"<< l*w<< "квадратных футов"<<endl;
}