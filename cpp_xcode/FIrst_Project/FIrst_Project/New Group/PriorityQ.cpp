////
////  PriorityQ.cpp
////  FIrst_Project
////
////  Created by Данил on 12/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class PriorityQ{
//    int maxsize;
//    long *queArray;
//    int nItems = 0;
//public:
//    PriorityQ(int s):maxsize(s){
//        queArray = new long [s];
//    }
//    void insert(long item);
//    long remove(){
//        return queArray[--nItems]; //извлечение минимального элемента
//    }
//    long peekMin()const{
//        return queArray[nItems-1];//чтение минимального элемента
//    }
//    bool isEmpty(){
//        return (nItems == 0);
//    }
//    bool isFull(){
//        return (nItems == maxsize);
//    }
//    ~PriorityQ(){
//        delete []queArray;
//    }
//};
//void PriorityQ::insert(long item){
//    if(isEmpty()){//если очередь пуста
//        queArray[nItems++] = item;//вставка в 0 ячейку
//    }else{
//        int i;
//        for(i = nItems - 1; i >= 0; i--){
//            if(item > queArray[i]){ //если новый элемент больше
//                queArray[i + 1] =  queArray[i]; //сдвинуть вверх
//            }else{
//                break;//сдвиг прекращается
//            }
//        }
//        queArray[ i + 1] = item;//вставка элемента
//        nItems++;
//    }
//}
//// [ 4] [3] [ 2] [1 ] [ ] []
//int main(){
//    PriorityQ thePQ(5);
//    //нужна прверка на isFull
//    thePQ.insert(30);
//    thePQ.insert(50);
//    thePQ.insert(10);
//    thePQ.insert(40);
//    thePQ.insert(20);
//    while(!thePQ.isEmpty()){
//        long item = thePQ.remove();
//        cout<<"item = "<<item<<endl;
//    }
//}
