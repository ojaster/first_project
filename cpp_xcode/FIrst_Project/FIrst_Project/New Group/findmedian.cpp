////
////  findmedian.cpp
////  FIrst_Project
////
////  Created by Данил on 10.5.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void printmas(int *massive, int size){
//    for(int i = 0; i< size; i++){
//        cout<<massive[i]<<endl;
//    }
//}
//class MedianFinder {
//private:
//    int *massive;
//    int masSize;
//    int top;
//    bool sorted;
//public:
//    MedianFinder(int range = 10):masSize(range),top(0),sorted(false){
//        massive = new int(masSize);
//    }
//    void resize(){
//        int *massive2 = massive;
//        delete massive;
//        massive = new int(masSize * 2);
//        massive = massive2;
//        masSize = masSize *2;
//    }
//    
//    void addNum(int num) {//o(1) - o(n*n + log(n))
//        if(top >= masSize){
//            resize();
//        }
//        massive[top] = num;
//        top++;
//         printmas(massive, top);
//        cout<<"----------"<<endl;
//        sorted = false;
//    }
//    
//    double findMedian() {//o(nlog(n))
//        if(!sorted){
//            sort(massive, massive+top);
//        }
//        printmas(massive, top);
//        cout<<"----------"<<endl;
//         printmas(massive, masSize);
//        cout<<"----------"<<endl;
//        sorted = true;
//        if(top % 2 ==0){
//            cout<< "1:" << massive[top/2-1]<<"-2:"<<massive[top/2]<<endl;
//            return (massive[top/2-1] + massive[top/2])/2;
//        }
//        return massive[masSize/2];
//    }
//};
//
//int main(){
//    MedianFinder medianfinder;
//    medianfinder.addNum(1);
//    medianfinder.addNum(2);
//    cout<<medianfinder.findMedian()<<endl;
//}
