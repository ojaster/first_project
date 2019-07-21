//
//  linkStackApp.cpp
//  FIrst_Project
//
//  Created by Данил on 14/07/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
using namespace std;
class Link{
public:
    int dData;
    Link * next;
    Link(int n):dData(n){}
    void displayLink(){cout<<dData<<endl;}
    
};

class LinkList{
    Link * first;//first it's like massive with one obj and that one obj contains another obj and so on
    int n;
public:
    LinkList():n(0),first(NULL){}
    bool isEmpty(){
        return first == NULL;
    }
    void insertFirst(int dd){
        Link * newLInk = new Link(dd);//1.new link = dd addres 2.second time when we enter newLink now has new addres
        newLInk->next = first;//1.we put first's value in to newlink's next 2.then we put inside New newLink's next first what contains old newLink wit his next
        first = newLInk;//1.then we put newLink inside first and inside that newLink's next 2.we put New newLink with New newLink's next what contains old newLink into first(obj)
        n++;
    }
    int deleteFirst(){
        Link * temp;
        temp = first;
        first = first->next;
        int res = temp->dData;
        delete temp;
        return res;
    }
    void displayList(){
        for(int i=0; i<n; i++){
            cout<<deleteFirst()<<endl;
        }
        
    }
    
};
class LinkStack:public LinkList{
LinkList theList;
public:
    LinkStack():LinkList(){}    // Конструктор
    void push(int j){
        theList.insertFirst(j);
    }
    int pop(){
        return theList.deleteFirst();
    }            // Извлечение элемента с вершины стека
    bool isEmpty(){
        return theList.isEmpty();
    }       // true, если стек пуст
    void displayStack(){
        theList.displayList();
    }
};
class LinkStackApp{
    LinkStack theStack = *new LinkStack(); // Создание стека
};
/*Необходимо разработать стек на основе связанного списка

Класс LinkList
Реализовать следующие методы:
public LinkList(); - конструктор
public boolean isEmpty();       // true, если список пуст

public void insertFirst(long dd); // Вставка элемента в начало списка

public long deleteFirst();  // Удаление первого элемента

public void displayList();

Класс LinkStack
Реализовать следующие методы:
private LinkList theList; - поле данных
public LinkStack()  ;          // Конструктор

public void push(long j);     // Размещение элемента на вершине стека

public long pop();            // Извлечение элемента с вершины стека

public boolean isEmpty();       // true, если стек пуст

public void displayStack();

Класс LinkStackApp
Реализовать:
LinkStack theStack = new LinkStack(); // Создание стека

вставить несколько элементов в стек
вывести содержимое стека
вставить несколько элементов в стек
вывести содержимое стека
Извлечь два элемента из стека
Вывод содержимого стека

Пример работы программы :

Пояснение к примеру работы:
Внесли 40 20, вывели на экран
Внесли 80, 60, вывели на экран
Извлекли два элемента из стека (80, 60)*/


//int main(){
//    LinkList a;
//    a.insertFirst(10);
//    a.insertFirst(20);
//    a.insertFirst(30);
//    a.displayList();
//}

