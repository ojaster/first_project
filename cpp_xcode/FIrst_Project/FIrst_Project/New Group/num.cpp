////
////  num.cpp
////  FIrst_Project
////
////  Created by Данил on 12/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <Iostream>
//using namespace std;
//int main(){
//    int n = 100;
//    int array[100];
//    int curln;
//    int lowerBound = 0;
//    int upperBound = n - 1;
//    int num = 0;
//    for(int i=0; i<n; i++){
//        array[i] = i;
//        cout<<array[i]<<endl;
//    }
//    for(int i=0; i<n; i++){
//        curln = (upperBound + lowerBound) / 2;
//        if(array[curln] == num){
//            cout<<"found"<<endl;
//            break;
//        }else if(lowerBound>upperBound){
//            cout<<"not found"<<endl;
//        }else if(array[curln]<num){
//           lowerBound = curln + 1;
//        }else if(array[curln]>num){
//            upperBound = curln - 1;
//        }
//    }
//}
