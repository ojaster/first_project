//
//  Queue.cpp
//  FIrst_Project
//
//  Created by Данил on 29/06/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Queue{
//private:
//    long *queArray;
//    int front = 0;
//    int rear = 0;
//    int nItems = 0;
//    int maxSize;
//public:
//    Queue(int s):maxSize(s){ queArray = new long[s];}
//    ~Queue(){delete[] queArray;}
//    bool isEmpty();
//    bool isFull();
//    int size();
//    void insert(long g);
//    long remove();
//    long peekFront();
//    long peakRear();
//};
//bool Queue::isEmpty(){
//    return (nItems == 0);
//}
//bool Queue::isFull(){
//    return (nItems == maxSize);
//}
//int Queue::size(){
//    return nItems;
//}
//void Queue::insert(long g){ //вставка в конец очереди
//    if(rear == maxSize){
//        rear = 0;
//    }
//    queArray[rear++] = g;
//    nItems++;
//}
//long Queue::remove(){ //извлечение элмента в начале очереди
//    long temp = queArray[front++];//выбираем и увеличиваем fron
//    if(front == maxSize){ //циклический перенос
//        front = 0;
//    }
//    nItems--;//уменьшение количества элементов
//    return temp;
//}
//long Queue::peekFront(){ //чтение элемента в начале очереди
//    return queArray[front];
//}
//long Queue::peakRear(){
//    return queArray[rear];
//}
//int main(){
//    Queue theQ(5);
//    theQ.insert(10);
//    theQ.insert(20);
//    theQ.insert(30);
//    theQ.insert(40);
//    
//    theQ.remove();
//    theQ.remove();
//    theQ.remove();
//   
//    theQ.insert(50);
//    theQ.insert(60);
//    theQ.insert(70);
//    theQ.insert(80);
//    
//    while(!theQ.isEmpty()){
//        long n = theQ.remove();
//        cout<<n<<endl;
//    }
//}
