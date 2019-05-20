////
////  QeueExample.cpp
////  FIrst_Project
////
////  Created by Данил on 28/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "QeueExample.hpp"
//int QeueExample::qCount(){
//    return items;
//}
//bool QeueExample::dnqueue(Item & item){
//    if(front == NULL){
//        return false;
//    }
//    item = front->item;
//    items--;
//    Node * temp = front;
//    front = front->next;
//    delete temp;
//    if(items == 0){
//        end = NULL;
//    }
//    return true;
//    
//}
//bool QeueExample::enqueue(const Item & item){
//    if(isFull()){
//        return false;
//    }
//    
//    Node * add = new Node;//bad
//    add->item = item;
//    add->next=NULL;
//    items++;
//    
//    if(front == NULL){// если очередь пуста
//        front = add;//элемент помещается в начало
//        end = add;
//        return true;
//    }else{
//        end -> next = add;//иначе помещается в конец
//        end = add;//указатель конца указывает на новый узел
//        return true;
//    }
//}
//    
//bool QeueExample::isEmpty()const{
//    return items > 0 ? false : true;
//}
//bool QeueExample::isFull()const{
//    if(items == Q_SZE){
//        return true;
//    }else{
//        return false;
//    }
//}
//    
//;
//
//QeueExample::QeueExample(int qs) : qSize(qs),front(NULL),end(NULL), items(0){}//создание очереди с предельным размеров qs
//QeueExample::~QeueExample(){
//    Node * temp;
//    while(front!=NULL){//пока очередь не пуста
//        temp = front;// сохранение адреса начального элемента
//        front = front->next;//переустановка указателя на следующий элемент
//        delete temp;//удаление предыдущего начального элемента
//    }
//}
////int main(){
////    QeueExample nip;
////    QeueExample tuck;
////    //QeueExample line2(nip);//нельзя
////    //tuck = nip;//нельзя
////}
