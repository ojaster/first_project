//
//  QeueExample.hpp
//  FIrst_Project
//
//  Created by Данил on 28/04/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef QeueExample_hpp
#define QeueExample_hpp

#include <stdio.h>
#include <iostream>
#include "Customer.hpp"
using namespace std;

typedef Customer Item;


class QeueExample{
    enum{Q_SZE = 10};// вложенное перечисление
private:
    struct Node{ Item item; Node * next;};//вложенная структура
    
    Node * end;
    Node * front;
    int items;//текущее количество элементов в очереди
    const int qSize;
    QeueExample(const QeueExample & q):qSize (0) {}//фейковое определение
    QeueExample & operator =(const QeueExample & q) {
        return *this;
    }
public:
    QeueExample(int qs = Q_SZE);//создание очереди с предельным размеров qs
    ~QeueExample();
    bool isEmpty()const; //+
    bool isFull()const;//+
    int qCount();//+
    bool enqueue(const Item & item);//добавление элемента в очередь + (ДЗ)
    bool dnqueue( Item & item);//удаление элемента из очереди
    
};

#endif /* QeueExample_hpp */
