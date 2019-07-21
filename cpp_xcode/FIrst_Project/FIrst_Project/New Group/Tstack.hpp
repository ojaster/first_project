//
//  Tstack.hpp
//  FIrst_Project
//
//  Created by Данил on 16/07/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#ifndef Tstack_hpp
#define Tstack_hpp
#include <stdio.h>
#include <iostream>
using namespace std;
template <class T>
class TStack{
private:
    int maxSize;        // Размер массива
    T *stackArray;
    int top;           // Вершина стека
public:
    TStack(int s):maxSize(s){ //определение размера стека
        stackArray = new T[maxSize];//созадние массива
        top = -1;//пока нет ни одного элемента
    }
    ~TStack(){
        delete stackArray;
    }
    inline void push(T g){//размещение элемента на вершине стека
        stackArray[++top] = g;//увеличивание top, вставка элемента
    }
    
    void push(T * g){
        strcpy(stackArray, g);
        top++;
    }
    T pop(){//извлчеение элемента с вершины стека
        return stackArray[top--];//извлечение элемента, уменьшение top
    }
    inline T peek(){ //чтение элемента с вершины стека
        return stackArray[top];
    }
    T peek(int index){
        return stackArray[index];
    }
    void display()const{
        for(int i = 0; i<=top; i++){
            cout<<stackArray[i]<<endl;
        }
    }
    void displayStack(T *s){
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
    bool isEmpty(){
        return (top == -1);
    }
    bool isFull(){
        return (top == maxSize-1);
    }
};

#endif /* Tstack_hpp */
