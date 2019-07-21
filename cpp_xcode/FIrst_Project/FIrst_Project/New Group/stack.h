//
//  stack.h
//  FIrst_Project
//
//  Created by Данил on 23/06/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef stack_h
#define stack_h
#include <stdio.h>
#include <iostream>
#include <ctime>
using namespace std;
class StackX{
private:
     int maxSize;        // Размер массива
     long *stackArray;
     int top;           // Вершина стека
public:
    StackX(int s):maxSize(s){ //определение размера стека
        stackArray = new long[maxSize];//созадние массива
        top = -1;//пока нет ни одного элемента
    }
     ~StackX(){
        delete stackArray;
    }
    inline void push(long g){//размещение элемента на вершине стека
        stackArray[++top] = g;//увеличивание top, вставка элемента
    }
      long pop(){//извлчеение элемента с вершины стека
        return stackArray[top--];//извлечение элемента, уменьшение top
    }
    inline long peek(){ //чтение элемента с вершины стека
        return stackArray[top];
    }
    long peek(int index){
        return stackArray[index];
    }
    bool isEmpty();
    bool isFull();
   void display()const{
        for(int i = 0; i<=top; i++){
            cout<<stackArray[i]<<endl;
        }
    }
    void displayStack(char *s){
        for(int i=0; i<strlen(s); i++){
            cout<<s[i];
        }
        cout<<endl;
        cout<<"stack (bottom-->):";
        for(int i=0; i<strlen(s); i++){
            cout<<peek(i)<<" ";
        }
        cout<<endl;
        
    }
    int size(){
        return top+1;
    }
};

#endif /* stack_h */
