////
////  HashTableApp.cpp
////  FIrst_Project
////
////  Created by Данил on 23/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class DataItem {
//    int idata;// данные (ключ) Данных может быть и больше
//public:
//    DataItem(){}
//    DataItem(int);
//    int get();
//};
//DataItem::DataItem(int key):idata(key){}
//int DataItem::get(){return idata;}
//class HashTable{
//    DataItem * hashArray;//массив ячеек хеш-таблицы
//    int arraySize;
//public:
//    HashTable(int);
//    ~HashTable();
//    int hashFunct(int);
//    void insert(DataItem);
//    int deleteH(int);
//    void displayTable();
//    bool find(int key);
//    int getPrime(int min);
//    bool isPrime(int n);
//};
//HashTable::HashTable(int size){
//    
//    arraySize = getPrime(size);
//    hashArray = new DataItem[arraySize + 1];
//    for(int i=0; i<size; i++){
//        hashArray[i] = -1;
//    }
//}
//HashTable::~HashTable(){
//    delete [] hashArray;
//}
//int HashTable::hashFunct(int key){// 10 20 30 1
//    return key % arraySize; //хеш функция
//}
//void HashTable::insert(DataItem item){
//    int key = item.get();//получение ключа
//    int hashval = hashFunct(key);//хеширование ключа
//    //пока не будет найдена пустая ячейка
//    while(hashArray[hashval].get() != -1){
//        ++hashval;//переход к следующей ячейке
//        hashval %= arraySize-1;//при достижении конца таблицы происходит возврат к началу
//    }
//    //вставка в таблицу
//    hashArray[hashval] = item;
//    
//}
//int HashTable::deleteH(int key){
//    int hashVal = hashFunct(key);
//    while (hashArray[hashVal].get() != -1) {
//        if(hashArray[hashVal].get() == key){
//            int temp = hashArray[hashVal].get();
//            hashArray[hashVal] = -1;
//            return temp;
//        }
//        ++hashVal;
//        hashVal %= arraySize-1; // 5 6 7 7 8 10 1 2 3 4
//    }
//    return -1;
//}
//void HashTable::displayTable(){
//    for(int i=0; i<arraySize-1; i++){
//        if(hashArray[i].get()!=-1){
//            cout<<hashArray[i].get()<<endl;
//        }
//    }
//}
//bool HashTable::find(int key){
//    int hashVal = hashFunct(key);
//    while (hashArray[hashVal].get() != -1) {
//        if(hashArray[hashVal].get() == key){
//            return 1;
//        }
//        ++hashVal;
//        hashVal %= arraySize-1; // 5 6 7 7 8 10 1 2 3 4
//    }
//    return 0;
//}
//int HashTable::getPrime(int min){//7
//    for(int i = min + 1; true; i++){
//        if(isPrime(min)){
//            return i;
//        }
//    }
//}
//bool HashTable::isPrime(int n){
//    for(int i=2; i*i<=n; i++){
//        if(n%i==0){
//            return false;
//        }
//    }
//    return true;
//}
//
//int main(){
//}
//
