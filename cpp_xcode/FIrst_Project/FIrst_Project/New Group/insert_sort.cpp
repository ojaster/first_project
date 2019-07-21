////
////  insert_sort.cpp
////  FIrst_Project
////
////  Created by Данил on 21/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <ctime>
//using namespace std;
//int main(){
// unsigned int start_time =  clock();
//   int k = 0;
//    const int n = 10000;
//    int massive[n];
//    for(int i=0; i<n; i++){
//        massive[i] = i;
//    }
////    for(int i=0; i<n; i++){
////        cout<<k<<":"<<massive[i]<<endl;
////    }
////    k++;
////    cout<<endl;
//    int temp;
//    int in;
//    for(int i=1; i<n; i++){
//       //пометить элемет и скопировать его
//        temp = massive[i];
//        in = i;
//        while(in>0 && massive[in-1]<temp){
//            massive[in] = massive[in-1];//сдвинуть на одну позицию вправо
//            in--;//сдвинуть на одну позицию влево
//        }
//        if(massive[in] == temp){
//            continue;
//        }
//        massive[in] = temp;//встаить помеченный элемент
//    }
////    for(int i=0; i<n; i++){
////        cout<<k<<":"<<massive[i]<<endl;
////    }
////    k++;
////    cout<<endl;
////    cout<<flag<<endl;
//unsigned int end_time = clock();
//unsigned int search_time = end_time - start_time; // искомое время
//cout << "runtime = " << search_time/1000.0 << endl;
//    
//}
