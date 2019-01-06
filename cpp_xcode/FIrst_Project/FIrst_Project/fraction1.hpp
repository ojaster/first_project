//
//  fraction1.hpp
//  FIrst_Project
//
//  Created by Данил on 17.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//

#include <iostream>
using namespace std;

class Fraction{
private:
    int a;//числитель
    int b; //знаменатель
    int getNOD();//поиск НОД по алгоритму Евклида
public:
    Fraction(int a, int b);
    Fraction add (Fraction d2); // сложение двух дробей
    Fraction sub (Fraction d2);// вычитание двух дробей
    Fraction mult (Fraction d2);//умножение
    Fraction div (Fraction d2);//деление
    void reduce();//сокращение
    void show();//вывод на экран
};

//mr_object
//try_me()

//mr_object.try_me()//отправка сообщения
