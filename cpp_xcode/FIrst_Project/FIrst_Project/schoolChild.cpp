////
////  schoolChild.cpp
////  FIrst_Project
////
////  Created by Данил on 25/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//class child; //заранее объявляем класс, который станет дружественным
//
//class schoolchild //определяем следующий класс
//{
//    char name[16];
//    char surname[16];
//    int clas;
//public:
//    schoolchild (char*, char*, int);//конструктор
//    void getData();
//    friend child;//указываем, что класс дружественный
//};
//// определяем методы класса schoolchild
//schoolchild::schoolchild(char *n, char *s, int c)
//{
//    strcpy(name, n);
//    strcpy(surname, s);
//    clas = c;
//}
//
//void schoolchild::getData()
//{
//    cout << name << " " << surname << "\t" << clas << "-й класс"<< endl;
//}
//
//class child //определяем дружественный класс
//{
//private:
//    string works;
//    void set(string d){
//        works = d;
//    }
//public:
//    void changeClas(schoolchild &, int );
//    void getChangeData(schoolchild);
//};
//// определяем методы класса child
//void child::changeClas(schoolchild &obj, int newCl) //передаем объект класса и вносим изменения в int clas
//{
//    obj.clas = newCl;
//}
//
//void child::getChangeData(schoolchild obj)
//{
//    cout << obj.name << "  " << obj.surname << "\t переведен(а)  в " << obj.clas << "-й класс\n";
//}
//
//int main()
//{
//    setlocale(LC_ALL, "rus");
//
//    //создаем объекты класса schoolchild
//    schoolchild visotscaya  ( "Маргарита", "Высоцкая", 3);
//    schoolchild semenov     ( "Александр", "Семенов", 3);
//
//    cout << "Список учеников 3-го класса:\n";
//    visotscaya.getData();
//    semenov.getData();
//
//    child transfer; //создаем объект transfer - перевод в с следующий класс
//
//    transfer.changeClas(visotscaya, 4);
//    transfer.changeClas(semenov, 4);
//
//    cout << "\nПеревод в следующий класс:\n";
//    transfer.getChangeData(visotscaya);
//    transfer.getChangeData(semenov);
//
//    cout << "\nСписок учеников 4-го класса:\n";
//    visotscaya.getData();
//    semenov.getData();
//
//    return 0;
//}
