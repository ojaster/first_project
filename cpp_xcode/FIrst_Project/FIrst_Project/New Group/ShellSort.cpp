////
////  ShellSort.cpp
////  FIrst_Project
////
////  Created by Данил on 09/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//static int swapCounter = 0;
//static int counter = 0;
//static int forCounter = 0;
//static int elements = 10000000;
//void shellSort(int nElems, int * arr);
//int main(){
//    srand(time(NULL));
//    int *arr = new int[elements];
//    for(int i=0; i<elements; i++){
//        arr[i] = rand() % 20;
//    }
//    
//    
//    shellSort(elements, arr);
//    
//    cout<<"swapCounter:"<<swapCounter<<endl;
//    cout<<"forCounter:"<<forCounter<<endl;
//    cout<<"counter:"<<counter<<endl;
//    delete [] arr;
//}
//void shellSort(int nElems, int * arr){
//    int h = 1;//вычисление исходного значеия h
//    int inner, outer;
//    int temp;
////    while(h <= nElems/3){
////        h = h * 3 + 1; // 1 4 13 40 121 ...
////    }
//    h = nElems;
//    
//    while(h>0) {
//        for(outer = h; outer < nElems; outer++){
//            temp = arr[outer];
//            inner = outer;
//             while(inner > h - 1 && arr[inner-h] >= temp){ // 0 4 8 проход по подмассивам
//                 arr[inner] = arr[inner-h];
//                 inner -= h;
//                 swapCounter++;
//             }
//            arr[inner] = temp;
//            forCounter++;
//        }
//        h = (h-1)/3;//уменьшение h
//        counter++;
//    }
//}
