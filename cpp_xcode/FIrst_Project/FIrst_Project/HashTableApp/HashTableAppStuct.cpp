////
////  HashTableAppStuct.cpp
////  FIrst_Project
////
////  Created by Данил on 23/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//struct DataItem {
//    int idata;
//    int key;
//};
//class HashTable{
//    DataItem * hashArray;
//    int arraySize;
//    int full;
//public:
//    HashTable(int);
//    ~HashTable();
//    void insert(int,int);
//    int deleteH(int);
//    int hashFunct(int);
//    void displayTable();
//};
//HashTable::HashTable(int size):arraySize(size),full(0){
//    hashArray = new DataItem[size];
//    for(int i=0; i<size; i++){
//        hashArray[i].idata = -1;
//    }
//}
//HashTable::~HashTable(){
//    delete [] hashArray;
//}
//void HashTable::insert(int item,int key){
//    int temp = key;
//    if(hashArray[hashFunct(temp-1)].key == key){
//        hashArray[hashFunct(temp-1)].key = key;
//        hashArray[hashFunct(temp-1)].idata = item;
//        return;
//    }
////    if(hashArray[hashFunct(key-1)].key == key){
////        full--;
////    }
//    while(hashArray[hashFunct(temp-1)].idata != -1){
//        if(full == arraySize){
//            cout<<"FULL"<<endl;
//            cout<<endl;
//            return;
//        }
//        temp++;
//    }
//     hashArray[hashFunct(temp-1)].key = key;
//    hashArray[hashFunct(temp-1)].idata = item;
//    full++;
//}
//int HashTable::deleteH(int key){
//    int temp = -1;
////    temp = hashArray[hashFunct(key - full)].idata;
////    hashArray[hashFunct(key - full)].idata = -1;
////    hashArray[hashFunct(key - full)].key = -1;
//    for(int i=0; i<arraySize; i++){
//        if(key == hashArray[i].key){
//            temp = hashArray[i].idata;
//            hashArray[i].idata = -1;
//            hashArray[i].key = -1;
//        }
//    }
//    full--;
//    return temp;
//}
//
//int HashTable::hashFunct(int key){
//    return key % arraySize;
//}
//void HashTable::displayTable(){
//    for(int i=0; i<arraySize; i++){
//        cout<<"elem:"<<hashArray[i].idata<<endl;
//        cout<<"key:"<<hashArray[i].key<<endl;
//    }
//    cout<<endl;
//}
//int main(){
//    HashTable hash(3);
//    hash.insert(3, 4);
//    hash.displayTable();
//     hash.displayTable();
//    hash.insert(5, 4);
//    hash.displayTable();
//    hash.insert(6, 4);
//    hash.displayTable();
//    hash.insert(7, 16);
//    hash.displayTable();
//    hash.insert(6, 8);
//    hash.displayTable();
//     hash.displayTable();
//    hash.insert(6, 7);
//    hash.displayTable();
//    
//    cout<<hash.deleteH(4)<<endl;
//    hash.displayTable();
//    cout<<hash.deleteH(16)<<endl;
//    hash.displayTable();
//    cout<<hash.deleteH(8)<<endl;
//    hash.displayTable();
//}
//
