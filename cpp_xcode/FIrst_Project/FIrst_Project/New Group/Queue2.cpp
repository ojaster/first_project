////
////  Queue2.cpp
////  FIrst_Project
////
////  Created by Данил on 29/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Queue{
//private:
//    long *queArray;
//    int front = 0;
//    int rear = 0;
//    int maxSize;
//public:
//    Queue(int s):maxSize(s+1){ queArray = new long(s+1);}
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
//    return ( rear == front || front + (maxSize - 1) == rear); // [] [r] [] [] [] [f]
//}
//bool Queue::isFull(){
//    return (size() == maxSize-1); //
//}
//int Queue::size(){
//    if(front<rear){
//        return (rear - front)+1; // непрерывная последовательность
//    }else{
//         return maxSize - front + rear+1;//несвязная последовательность
//    }
//}
//void Queue::insert(long g){ //вставка в конец очереди
//    if(rear == maxSize){
//        rear = 0;
//    }
//    queArray[rear++] = g;
//}
//long Queue::remove(){ //извлечение элмента в начале очереди
//    long temp = queArray[front++];//выбираем и увеличиваем fron
//    if(front == maxSize){ //циклический перенос
//        front = 0;
//    }
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
//    cout<<theQ.size()<<endl;
//    theQ.insert(10);
//    theQ.insert(20);
//    theQ.insert(30);
//    theQ.insert(40);
//    cout<<theQ.size()<<endl;
//    theQ.remove();
//    theQ.remove();
//    theQ.remove();
//    cout<<theQ.size()<<endl;
//    theQ.insert(50);
//    theQ.insert(60);
//    theQ.insert(70);
//    theQ.insert(80);
//    if(theQ.isFull()){
//        cout<<"full"<<endl;
//    }
//    cout<<theQ.size()<<endl;
//    while(!theQ.isEmpty()){
//        long n = theQ.remove();
//        cout<<n<<endl;
//    }
//}
