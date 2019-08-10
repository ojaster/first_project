////
////  GraphOrJustANode.cpp
////  FIrst_Project
////
////  Created by Данил on 22/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//template <class T>
//class Graph2;
//template <class T>
//class Vertex{
//private:
//    T data;
//    Vertex<T>* next;
//public:
//    friend class Graph2<T>;
//    Vertex(T dat, Vertex<T>* nex){
//        data=dat;  next = nex;
//    }
//};
//
//template <class T>
//class Graph2{
//public:
//    Vertex<T>* head;
//    Graph2() : head(NULL){}
//    void insert(T data){
//        Vertex<T>* ptr = new Vertex<T>(data, head);
//        head = ptr;
//    }
//    T deleteFirst(){
//        Vertex<T> * temp;
//        temp = head;
//        head = head->next;
//        T a = temp->data;
//        return a;
//    }
//};
//int main(){
//    Graph2<int> graph1;
//    graph1.insert(1);
//    graph1.insert(2);
//    cout<<graph1.deleteFirst()<<endl;
//    cout<<graph1.deleteFirst()<<endl;
//}
