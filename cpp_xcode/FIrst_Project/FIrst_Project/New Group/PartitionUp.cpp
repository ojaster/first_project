////
////  PartitionUp.cpp
////  FIrst_Project
////
////  Created by Данил on 10/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//static const int sizeoFmassive = 10;
//class Partition{
//    int arr[sizeoFmassive];
//    int size;
//public:
//    Partition():size(sizeoFmassive){
//     //  int massive[10] = {2, 17, 5, 16, 9, 10, 18, 18, 9, 1 };
//      //  arr = new int[size];
//        for(int i=0; i<size; i++){
//            arr[i] = rand()%20;
//        }
//    }
//    int partition(int,int,long);
//    void swap(int,int);
//  //  ~Partition(){
//    //    delete [] arr;
//   // }
//    void display();
//    void quickSort(int,int/*,int*/);
//    void quickSort();
//    void recQuickSort(int,int);
//    int median3(int left, int right);
//    void manualSort(int, int);
//    void insertionSort(int,int);
//};
//int Partition::partition(int left, int right,long pivot){
//    int leftPtr = left - 1; //справа от первого элемента
//    int rightPtr = right;//слева от опорного элемента // +1
//    
//    while(true) {
//        while(arr[++leftPtr] < pivot)//поиск большего элемента
//            ;//пустое тело цикла
//        while(arr[--rightPtr] > pivot) //поиск меньшего элемента
//            ;//пустое тело цикла
//        
//        if(leftPtr >= rightPtr){ //если указатели сошлись  - разбиение закончено
//            break;
//        }else{
//            swap(leftPtr, rightPtr);//поменять элементы местами
//        }
//     
//    }
//    return leftPtr;
//    
//}
//void Partition::swap(int index1, int index2){
//    int temp = arr[index1];
//    arr[index1] = arr[index2];
//    arr[index2] = temp;
//}
//void Partition::display(){
//    int i =0;
//    while(i!=size){
//        cout<<arr[i++]<<" ";
//    }
//    cout<<endl;
//}
////void Partition::quickSort(int left, int right/*,int pivot = 6*/){
////    int pivot = arr[(right + left) / 2];
////    int num = partition(left, right, pivot);
////    //bool tic = true;
////    display();
////    if(/*pivot != 0  && tic == true*/num-1!=left){//num-1!=left
////        pivot--;
////        quickSort(left, num/*,pivot*/);
////    }else if(/*pivot == 0 || tic == false*/num != right){ //else if(num2 != right)
//////        pivot ++;
//////        tic = false;
////        int num2 =  partition(left, right, pivot);
////        display();
////        quickSort(num2, right/*,pivot*/);
////    }
////    return;
////}
//void Partition::quickSort(){
//    recQuickSort(0, size-1);
//}
//void Partition::recQuickSort(int left, int right){
//    int nElems = right - left + 1;
//    if(nElems <= 10){
//       // manualSort(left, right); //ручная сортировка при малом размере
//        insertionSort(left,right);
//    }else{
//        int median =  median3(left,right);/*arr[(right + left)/2]*/;//median3(left, right);
//     //   cout<<median<<endl;
//      //  display();
//        int part = partition(left, right, median);
//      //  display();
//        recQuickSort(left, --part);
//       // display();
//        recQuickSort(++part, right);
//    }
//}
//
//int Partition::median3(int left, int right) {
//    int center = (left + right) / 2;
//    if(arr[left] > arr[center]){//
//        swap(left, center);
//    }
//    if(arr[left] > arr[right]){
//        swap(left, right);
//    }
//    if(arr[center] > arr[right]){
//        swap(center, right);
//    }
//    //размещение на правом краю медиану
//    swap(center, right-1);
//    return arr[right-1];
//}
//void Partition::manualSort(int left, int right){
//    int elems = right - left + 1;
//    if(size<=1){
//        return; // сортировка не требуется
//    }
//    if(elems == 2) {
//        if(arr[left]>arr[right]){
//            swap(left, right);
//            return;
//        }
//    }else{
//        if(arr[left] > arr[right-1]){
//            swap(left, right-1); // left, center
//        }
//        if(arr[left] > arr[right]){
//            swap(left, right); //left, right
//        }
//        if(arr[right-1] > arr[right]){
//            swap(right-1, right); //center, right
//        }
//    }
//}
//void Partition::insertionSort(int left,int right){
//    int in, out;
//    for(out = left; out <= right; out++){
//        int temp = arr[out];
//        in = out;
//        while(in >= left && arr[in-1] >= temp){//пока не найден меньший элемент
//            arr[in] = arr[in-1]; //сдвигает на один элемент вправо
//            in--;
//        }
//        arr[in] = temp;//вставляем помеченный элемент
//    }
//}
//
//int main(){
//    srand(time(NULL));
//    Partition part;
// //   part.display();
//    //part.partition(0, size - 1, pivot);
//   // part.display();
//    part.quickSort();
//   // cout<<"_________"<<endl;
//   // part.display();
//    cout<<"end"<<endl;
//}
