////
////  sort_selection.cpp
////  FIrst_Project
////
////  Created by Данил on 21/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <ctime>
//using namespace std;
//int main(){
//    unsigned int start_time =  clock();
//    const int n = 10000;
//    int k = 0;
//    int massive[n];
//    for(int i=0; i<n; i++){
//        massive[i] = rand()%10;
//    }
//    for(int i=0; i<n; i++){
//        cout<<k<<":"<<massive[i]<<endl;
//    }
//    k++;
//    cout<<endl;
//    int temp;
//    int min;
//    int flag = 0;
//    for(int i=0; i<n; i++){
//        min = i;
//        for(int j = i + 1; j < n - 1; j++){ // i = 1  j = 1 2 3 | 4 52 1
//            if(massive[min] > massive[j]){
//                min = j;
//            }
//        }
//        if(min != i){
//        temp = massive[min];
//        massive[min] = massive[i];
//        massive[i] = temp;
//        }
//
//    }
//    for(int i=0; i<n; i++){
//        cout<<k<<":"<<massive[i]<<endl;
//    }
//    k++;
//    cout<<endl;
//    cout<<flag<<endl;
//    unsigned int end_time = clock();
//    unsigned int search_time = end_time - start_time; // искомое время
//    cout << "runtime = " << search_time/1000.0 << endl;
//
//}
