////
////  ordArray.cpp
////  FIrst_Project
////
////  Created by Данил on 03/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class OrdArray{
//private:
//    int nElems;
//    int max;
//    long *a;
//    int recFind(long,int,int);
//public:
//    OrdArray(int);
//    
//    ~OrdArray();
//    
//    int size();
//    
//    int find(long);
//    
//    void insert(long);
//    
//};
//
//int main(){
//  
// 
//}
//
//OrdArray::OrdArray(int max1) : nElems(0), max(max1){
//    a = new long[max];
//}
//
//OrdArray::~OrdArray(){
//    delete [] a;
//}
//
//int OrdArray::size(){
//    return nElems;
//}
//
//int OrdArray::find(long searchKey){
//    return recFind(searchKey, 0, nElems-1);
//}
//
//void OrdArray::insert(long elem){
//    if(nElems == max){
//        return;
//    }
//    int i;
//    for(i=0; i<nElems; i++){ // оределение позиции (линейный поиск) 1 7  9 10
//         if(a[i] > elem){
//            break;
//        }
//    }
//    
//    for(int k = nElems; k > i; k--){ //перемещение элементов с большим значением ключа
//        a[k] = a[k-1];
//    }
//    
//    a[i] = elem; //вставка
//    nElems++; //увеличение размера
//}
//
//
//int OrdArray::recFind(long searchKey, int left, int right){
//    if(left >= right){
//        return -1;
//    }
//    int middle = (left+right)/2;
//    if(a[middle] == searchKey) {
//        return middle;
//    }
//    if(a[middle] < searchKey) {
//        return recFind(searchKey, middle+1, right);
//    }
//    return recFind(searchKey, left, middle-1);
//}
