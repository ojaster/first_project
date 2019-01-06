////
////  sumMinusPlus.cpp
////  FIrst_Project
////
////  Created by Данил on 08.09.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//void minusPlus(int *,int, int,int);
//void inputData(int*arr, int n);
//int main(){
//    int x = 3;
//    int z =10;
//    const int n=3;
//    
//    int y[n];
//    inputData(y,n);
//    minusPlus(y,n,x,z);
//    showData(y,n);
//}
//
//void inputData(int*arr, int n){
//    for(int i=0; i<n; i++){
//        cin>>arr[i];
//    }
//}
//
//void showData(int*arr, int n){
//    for(int i=0; i<n; i++){
//        cout<<arr[i]<<endl;
//    }
//}
//// 0 [1] 2 3 [4] 5 [6]   1  + (- 4 ) + 6
//void minusPlus(int * y,int n, int x,int z){
//    int sum=0;
//    int h = 1;
//    for(int i=0; i<n; i++){
//        if(y[i]<z && y[i]>x){ // значение массива
//            sum+=i*h; // индекс элемента массива
//            h*=-1; // 1 * (-1) = -1*-1 =1
//        }
//    }
//    cout<<sum<<endl;
//    
//}
