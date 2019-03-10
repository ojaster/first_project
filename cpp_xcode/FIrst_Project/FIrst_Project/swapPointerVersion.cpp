////
////  swapPointerVersion.cpp
////  FIrst_Project
////
////  Created by Данил on 01/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//void goodSwap(int * const px, int * const py);
//void badSwap(int x, int y);
//
//int main(){
//    int myScore=150;
//    int yourScore=1000;
//    cout<<"originals values"<<endl;
//    cout<<"yourScore:"<<yourScore<<endl;
//    cout<<"myScore"<<myScore<<endl;
//    badSwap(myScore, yourScore);
//    cout<<"calling badSwap()"<<endl;
//    cout<<"yourScore:"<<yourScore<<endl;
//    cout<<"myScore"<<myScore<<endl;
//    goodSwap(&myScore, yourScore);
//    cout<<"calling goodSwap()"<<endl;
//    cout<<"yourScore:"<<yourScore<<endl;
//    cout<<"myScore"<<myScore<<endl;
//}
//
//void goodSwap(int * const px, int * const py){
//    int temp;
//    temp = *px;
//    *px = *py;
//    *py = temp;
//
//}
//
//void badSwap(int x, int y){
//    int temp;
//    temp = x;
//    x = y;
//    y = temp;
//
//}
