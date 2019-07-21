//
//  stack.cpp
//  FIrst_Project
//
//  Created by Данил on 22/06/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
#include "stack.h"
bool StackX::isEmpty(){// True, если стек пуст
    return (top == -1);//? true:false;
}
bool StackX::isFull(){
    return (top == maxSize-1);
}
//int main(){
//    unsigned int start_time =  clock();
//
//    StackX stack(5);
//    stack.push(20);
//    stack.push(30);
//    stack.push(10);
//    stack.push(5);
//    stack.push(90);
////
////    while(!stack.isEmpty()){//пока стек не станет пустым
////        long value = stack.pop();//вывод содержимого
////        cout<<value<<endl;
////    }
////     cout<<endl;
//    stack.display();
//    unsigned int end_time = clock();
//    unsigned int search_time = end_time - start_time; // искомое время
//    cout << "runtime = " << search_time/1000.0 << endl;
//}


