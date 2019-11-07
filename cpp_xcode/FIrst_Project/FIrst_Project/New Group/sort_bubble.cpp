//////
//////  sor.cpp
//////  FIrst_Project
//////
//////  Created by Данил on 21/06/2019.
//////  Copyright © 2019 Daniil. All rights reserved.
//////
////
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <ctime>
//using namespace std;
//////10 элементов - 45 элементов
//////(n-1) + (n-2) + (n-3) = n*(n-1)/2   45
////// n*n/2 количество сравнений
////// n*n/4
////// o (n*n)
//int main(){
////    unsigned int start_time =  clock();
////
//    srand(time(NULL));
//    const int n = 100000;
//    int massive[n];
//    for(int i=0; i<n; i++){
//        massive[i] = rand()%20-1;
//    }
////    for(int i=0; i<n; i++){
////        cout<<massive[i]<<endl;
////    }
////    cout<<endl;
//    int temp;
//    int flag = 0;
//    for(int i=0; i<n; i++) {
//        for(int j = 0; j < n - 1 - i; j++){
//            if(massive[j] > massive[j+1]){///перестановок
//                temp = massive[j+1];
//                massive[j+1] = massive[j];
//                massive[j] = temp;
//                flag++;
//            }
//        }
//        if(flag == 0){
//            break;
//        }
//   }
//    cout<<"end";
//////    cout<<endl;
//////    for(int i = 0; i<n; i++){
//////        cout<<massive[i]<<endl;
//////  cout<<flag<<endl;
////    unsigned int end_time = clock();
////    unsigned int search_time = end_time - start_time; // искомое время
////    cout << "runtime = " << search_time/1000.0 << endl;
//}
