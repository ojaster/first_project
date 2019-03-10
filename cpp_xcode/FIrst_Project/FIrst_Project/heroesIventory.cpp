////
////  heroesIventory.cpp
////  FIrst_Project
////
////  Created by Данил on 01/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//
//string * ptrToElement(vector<string> * const pVec, int i);
//
//int main(){
//    vector<string> inventory{
//        "sword",
//        "armour",
//        "shield"
//    };
//    //отображает строковый элемент на который направлен возвращенный указаетль
//    cout<<*(ptrToElement(&inventory, 0))<<endl;
//    //присвает один указатель другому - малозатратная операция
//    string * pStr = ptrToElement(&inventory, 1); //указатель НА string
//    cout<<*pStr<<endl;
//    cout<<pStr<<endl;
//    cout<<&inventory[1]<<endl;
//    //копирование строкового объекта - затратная операция
//    string str = *ptrToElement(&inventory, 2);
//    cout<<str<<endl;
//    //изменение строкового объекта посредством возвращенного указателя
//    *pStr = "hello world!"; //рызыменование указетеля - получение !!!значения!!! на которое он указывает
//    cout<<inventory[1]<<endl;
//}
//
//string * ptrToElement(vector<string> * const pVec, int i){
//    return &((*pVec)[i]);
//}
