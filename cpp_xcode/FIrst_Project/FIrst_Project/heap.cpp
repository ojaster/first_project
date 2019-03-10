//
//  heap.cpp
//  FIrst_Project
//
//  Created by Данил on 10/03/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
int * intOnHeap();//возвращает целочисленную переменную из кучи
void leak1(); //создает утечку памяти
void leak2();//создает утечку памяти
int main(){
    int *pHeap = new int;
    *pHeap = 10;
    cout<<"*pHeap:"<<*pHeap<<endl;
    int *pHeap2 = intOnHeap();
    cout<<"*pHeap2:"<<*pHeap2<<endl;
    cout<<"freeing memory for pointed by pHeap:"<<endl;
    delete pHeap;
    cout<<"freeing memory for pointed by pHeap2:"<<endl;
    delete pHeap2;
    //избавляемся от висящих указателей
    pHeap = 0;
    pHeap2 = 0;
}

int * intOnHeap(){
    int * pTemp = new int(20);
    return pTemp;
}

void leak1(){
    int * drip1 = new int(30);
}

void leak2(){
    int * drip2 = new int(50);
    *drip2 = 100;
    drip2 =  new int(100);
    delete drip2;
}

