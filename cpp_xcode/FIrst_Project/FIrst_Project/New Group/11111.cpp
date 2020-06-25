////
////  11111.cpp
////  FIrst_Project
////
////  Created by Данил on 07/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <map>
//#include <iostream>
//using namespace std;
//int * funct(int *massive, int const n){
//    map<int,int> a;
//    //проходим по массиву и формируем словарь: {(value arr elem, index arr elem), ...}
//    int *temp;
//    temp = new int[2];
//    int target = 3;
//    for(int i = 0; i < n; i++){ // 0 1 2
//        a.insert(pair<int,int>(massive[i], i)); // key - value
//        int dop = target - massive[i]; // 1 3 8
//        map<int, int>::iterator it = a.find(dop); // O(1)
//        if(it != a.end() && it->second != i){
//                temp[0] = i;
//                temp[1] = it->second;// i
//                return temp;
//        }
//        
//    }
//    return nullptr;
//}
//int main(){
//    // 2 2 1
//    // 2 * (2 + 2 + 1) = 10
//    // (2 + 2 + 2 + 2 + 1) = 9
//    
////    int const n = 3;
////    int massive[n] = {1,2,1};
////    int temp[n] = {0};
////    int a = massive[0];
////    for(int i = 1; i < n; i++){
////        if(a == massive[i]){
////            a+=massive[i];
////        }else{
////            a-=massive[i];
////        }
////        if(a < 0){
////            a *= -1;
////        }
////    }
////    printf("%d\n",a);
//    
//    
////    int x = 1^2^2;
////    printf("%d\n",x);
//    
//    
//    
//    
//    
//    
////    int const n = 4;
////    int massive[n] = {1,1,1,2};
////    int j = 1;
////    int i = 0;
////    while(1) {
////        if(massive[i] != massive[j]){
////            i++;
////            massive[i] = massive[j];
////        }
////        j++;
////        if (j == n){
////            break;
////        }
////    }
////    printf("%d\n", i + 1);
////    printf("\n");
////    for(int j = 0; j < i + 1; j++){
////        printf("%d\n",massive[j]);
////    }
//    
////       int const n = 4;
////       int massive[n] = {1,1,1,2};
////       int j = 1;
////       for(int i = 0; i < n; i++){
////           if(massive[i] != massive[j]){
////               j++;
////               massive[j] = massive[i];
////           }
////       }
////       printf("%d\n", j);
////       printf("\n");
////       for(int i = 0; i < j; i++){
////           printf("%d\n",massive[i]);
////       }
//       // printf("%d\n",a);
//    int const n = 3;
//    int massive[n] = {1,2,6};
//    int * a = funct(massive,n);
//    for(int i = 0; i < 2; i++){
//        printf("%d\n", a[i]);
//    }
//    delete a;
//}
