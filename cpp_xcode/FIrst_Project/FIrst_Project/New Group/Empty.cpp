////
////  Empty.cpp
////  FIrst_Project
////
////  Created by Данил on 01/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//template<typename T>
//void f(T & param){
//    cout<<param<<endl;
//} //шаблон, получающий параметр по ...
//
////Возвращает размер массива как константу времени компиляции
////Параметер не имеет имени, так как кроме количества содержащихся в нем элементов
//template<typename T, size_t N>
//constexpr size_t arraySize(T (&) [N]) noexcept {
//    return N;
//}
//
//void myFunc(int param[]);
//void myFunc(int * param);
//
//
//void someFunc(int, double);
//
//template<typename T>
//void f1(T param);
//
//template<typename T>
//void f2(T & param);
//
//
//int main(){
//    
//    f1(someFunc);// param - указатель на фукнцию, тип void(*) (int, double)
//    f2(someFunc);//param - ссылка на функцию, тип - void(&) (int, double)
//    
//  //  const char name[] = "Briggs"; //тип name - const char[13]
//   // const char * ptrToName = name;//Массив становится указателм
//
//    //const char (&) [6]
//  //  f(name);//name - массив, но T - const char *
//
//  //  int keyVals [] = {1, 3, 7, 9, 11, 22, 35};///
//  //  int mappedValues[arraySize(keyVals)];// возможность объявлять ссылки на массивы позволяет создать шаблон, который выводит количество элементов,
//    //содержащихся в массиве
//   // array<int, arraySize(keyVals)> mappedVals1;
////    cout<<sizeof(3)<<endl;
////    double a = 3;
////    cout<<sizeof(a)<<endl;
//    
//}
