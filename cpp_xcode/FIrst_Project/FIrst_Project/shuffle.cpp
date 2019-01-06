////
////  shuffle.cpp
////  FIrst_Project
////
////  Created by Данил on 09.09.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//const int n = 8;
//void shuffle(int * arr, int n);
//int main(){
//    int arr []=   {0,1,2,3,4,5,6,7};
//    shuffle(arr, 8);
//    
//    for(int i =0; i<n; i++){
//        cout<<arr[i]<<"\t";
//    }
//}
//void shuffle(int *arr, int n){
//    int indexFirst =0;
//    int indexLast = 0;
//    for(int i=0; i<n; i++){
//        if(arr[i]%2!=0){
//            indexFirst=arr[i];
//            break;
//        }
//    }
//    for(int i=0; i<n; i++){
//        if(arr[i]%2!=0){
//            indexLast=arr[i];
//
//        }
//    }
//    int indexArray[n]; // храним индексы нечетных элементов
//    int amount = 0;
//    for(int i=0; i<n; i++){
//        if(arr[i]%2!=0){
//            indexArray[amount++] = i;
//           // cout<<i<<endl;
//        }
//    }
//    int j = amount -1;
//    int temp;
//    int currentndexLeft;
//    int currentndexRight;
//    
//    for(int i=0; i<amount/2; i++){
//        currentndexLeft=indexArray[i];
//        temp = arr[currentndexLeft];
//        currentndexRight = indexArray[j];
//        arr[currentndexLeft] = arr[currentndexRight];
//        arr[currentndexRight] = temp;
//        j--;
//    }
//}
