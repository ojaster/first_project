////
////  ProrityHeap.cpp
////  FIrst_Project
////
////  Created by Данил on 30/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//struct Node{
//    int num;
//};
//class Heap{
//    Node * arr;
//    int maxArrSize;
//    int arrSize;
//public:
//    Heap(int size):maxArrSize(size),arrSize(0){
//        arr = new Node [maxArrSize];
//    }
//    bool insert(Node elem){
//        if(arrSize >= maxArrSize){
//            return false;//если массив заполнен - неудача
//        }
//        Node * node = new Node;//создание нового узла
//        node->num = elem.num;
//        arr[arrSize].num = node->num;//размещение в конце массива
//        
//        trickUp(arrSize++);//смещение вверх
//        return true;//признак успешной вставки
//    }
//    Node remove(){
//        //сохраняем узел из корня
//        //копируем последний узел size-1 на место корня и вызывем trickDown
//        Node root = arr[0];
//        arr[0] = arr[arrSize-1];
//        arrSize--;
//        trickDown(0);//корневой узел сместился вниз
//        
//        return root;
//        
//    }
//    
//    void trickDown(int index){
//        int largerChild;
//        Node top = arr[index];
//        while(index<arrSize/2){ //пока у узла имеется хотя бы один потомок [6,4,5,1,2]
//            int lefthild = 2 * index + 1;
//            int righthild = lefthild + 1;
//            if(lefthild<arrSize && arr[lefthild].num<arr[righthild].num){
//                largerChild = righthild;
//            }else{
//                largerChild = lefthild;
//            }
//            if(top.num>=arr[largerChild].num){
//                break;
//            }
//            arr[index] = arr[largerChild];//потомок сдвигается вверх
//            index = largerChild;//переход вниз
//        }
//        arr[index] = top;
//    }
//    
//    void trickUp(int index) {
//        int parent = (index - 1) /2;
//        Node bottom = arr[index];
//        while(index>0 && arr[parent].num<bottom.num){
//            arr[index] = arr[parent];//узел перемещается вниз
//            index = parent; // index  перемещается вверх
//            parent = (parent-1)/2; // parent -- его родитель
//        }
//        arr[index] = bottom; //это первая ячейка в которой узел окажется не больше своего родителя
//    }
//    //изменение ключа
//    bool change(int index,int newValue){
//        if(index < 0 || index >= arrSize){
//            return false;
//        }
//        //сохранение старого значения ключа
//        int oldValue = arr[index].num;
//        arr[index].num = newValue;
//        //если узел повышается, выполненяем смещение вверх
//        if(oldValue > newValue){
//            trickDown(index);
//        }else if(oldValue < newValue) {
//            trickUp(index);
//        }
//        return true;
//    }
//    void heapSort(){
//        int i=0;
//        while(i != maxArrSize){
//            Node node  =remove();
//            cout<<node.num<<endl;
//            i++;
//        }
//    }
//    
//    void insertAt(int index, Node node){
//        arr[index] = node;
//    }
//    
//    void incrementSize() {
//        arrSize++;
//    }
//    void displayHeap(){
////        int nBlanks = 5;
////        int itemsPerRow = 1;
////        int column = 0;
////        int i = 0; //текущий элемент
////        string dots = "......................................";
////        cout<<dots<<endl;
////        while(arrSize > 0){//для каждого элемента пирамиды
////            if(column == 0){
////                for(int  j = 0; j < nBlanks; j++){
////                    cout<<" ";
////                }
////            }
////            cout<<arr[i].num<<" ";
////            if(++i == arrSize){
////                break;
////            }
////            //если конец строки
////            if((++column) == itemsPerRow){
////                nBlanks /= 2;//половина пробелов
////                itemsPerRow *= 2;//вдвое больше элементов
////                column = 0;//начать заново
////                cout<<endl;
////            }else{
////                for(int k = 0; k < nBlanks * 2 - 2; k++){
////                    cout<<" ";
////                }
////            }
////
////        }
////         cout<<endl;
////          cout<<dots<<endl;
//        int max = maxArrSize;
//        int j = 1;
//        for(int i = 0; i < arrSize; i++){
//            if(i == j){
//                if(j!=1){
//                    cout<<arr[i].num<<" ";
//                    i++;
//                }
//                j *= 2;
//                cout<<endl;
//            }
//            for(int k =0; k<max; k++){
//                cout<<" ";
//            }
//            if(i>=arrSize){
//                break;
//            }
//            cout<<arr[i].num;
//            for(int k =0; k<max; k++){
//                cout<<" ";
//            }
//            max--;
//        }
//    }
//    void displayArr(){
//        cout<<endl;
//        for(int i=0; i<maxArrSize; i++){
//            cout<<arr[i].num<<endl;
//        }
//        cout<<endl;
//    }
//};
//
//class PriorityQ{
//    Heap heap;
//public:
//    void insert(Node){}
//    Node remove(){return Node();}
//};
//int main(){
//    /*Node nod;
//    Node nod2;
//    Node nod3;
//    Node nod4;
//    Node nod5;
//    nod.num = 6;
//    nod2.num = 7;
//    nod3.num = 9;
//    nod4.num = 1;
//    nod5.num = 4;
//    Heap hep(5);
//    hep.insert(nod);
//    hep.insert(nod2);
//    hep.insert(nod3);
//    hep.insert(nod4);
//    hep.insert(nod5);
//    hep.heapSort();*/
//    srand(time(NULL));
//    int size,num;
//    cout<<":";
//    cin>>size;
//    Heap hep(size);
//    for(int i = 0; i < size; i++){
//        num = rand()%20;
//        Node nod;
//        nod.num = num;
//        hep.insertAt(i, nod);
//        hep.incrementSize();//todo подумать
//    }
//    cout<<"rand():"<<endl;
//    hep.displayArr();
//    //преобразование массива в пирамиду
//    for(int i = size/2-1; i >= 0; i--){
//        hep.trickDown(i);
//    }
//    
//    hep.displayArr();//вывод массива
//    hep.displayHeap();//вывод пирамиды
//    
//    //извлечение из пирамиды с сохранение в конце массива
//    for(int i = size-1; i >= 0; i--) {
//        Node biggesNode = hep.remove();// root
//        hep.insertAt(i, biggesNode);
//        cout<<"________"<<endl;
//         hep.displayHeap();
//        hep.displayArr();
//    }
//    
//    cout<<"Вывод отсортированного массива:"<<endl;
//    hep.displayArr();
//}
