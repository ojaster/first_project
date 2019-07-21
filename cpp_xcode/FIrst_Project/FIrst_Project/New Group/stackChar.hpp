////
////  stackChar.hpp
////  FIrst_Project
////
////  Created by Данил on 12/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#ifndef stackChar_hpp
//#define stackChar_hpp
//
//#include <stdio.h>
//#include <iostream>
//#include <ctime>
//using namespace std;
//class stackChar{
//private:
//    int maxSize;        // Размер массива
//    char *stackArray;
//    int top;           // Вершина стека
//public:
//    stackChar(int s):maxSize(s){ //определение размера стека
//        stackArray = new char[maxSize];//созадние массива
//        top = -1;//пока нет ни одного элемента
//    }
//    ~stackChar(){
//        delete stackArray;
//    }
//    inline void push(char g){//размещение элемента на вершине стека
//        stackArray[++top] = g;//увеличивание top, вставка элемента
//    }
//    long pop(){//извлчеение элемента с вершины стека
//        return stackArray[top--];//извлечение элемента, уменьшение top
//    }
//    inline long peek(){ //чтение элемента с вершины стека
//        return stackArray[top];
//    }
//    bool isEmpty();
//    bool isFull();
//    void display()const{
//        for(int i = 0; i<=top; i++){
//            cout<<stackArray[i]<<endl;
//        }
//    }
//};
//#endif /* stackChar_hpp */
