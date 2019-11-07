////
////  CannonSort.cpp
////  FIrst_Project
////
////  Created by Данил on 11/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//static int counter = 0;
//using namespace std;
//int main(){
//    const int n = 1000;
//    srand(time(NULL));
//    int massive4[n];
//    for(int i=0; i<n; i++){
//        massive4[i] = rand() % 20+1;
//    }
////    for(int i=0; i<n; i++){
////        cout<<massive4[i]<<endl;
////    }
////    cout<<"_________"<<endl;
//    int massive3[n];
//    int massive2[n];
//    int massive1[n];
//    for(int i=0; i<n; i++){
//        massive1[i] = 99999;
//    }
//    for(int i=0; i<n; i++){
//        massive2[i] = 99999;
//    }
//    bool tic[2];
//    tic[0] = false;
//    tic[1] = false;
//    int I = 0;
//    int K = 0;
//    int J = 1;
//    while(true){
//        if(massive4[J-1]<=massive2[I] && J-2!=n-1){
//            if(tic[0] == true){
//                I++;
//            }
//            massive2[I] = massive4[J-1];
//            tic[0] = true;
//            J++;
//        }else if(massive4[J-1]<=massive1[K] && J-2!=n-1){
//            if(tic[1] == true){
//                K++;
//            }
//            massive1[K] = massive4[J-1];
//            tic[1] = true;
//            J++;
//        }else{
//            I = (I+K)+1;
//            for(int i=0; i<n; i++){
//                if(massive1[i]>99){
//                    massive1[i] = 0;
//                }
//                if(massive2[i]>99){
//                    massive2[i] = 0;
//                }
//                massive3[i] = 0;
//            }
//
//                int j = 0;
//                int i = 0;
//                for(int k=0; k<n; k++){
//                    if(i >= n) {
//                        int a = massive2[j];
//                        massive3[k] = a;
//                        j++;
//                    } else if (j >= n) {
//                        int a = massive1[i];
//                        massive3[k] = a;
//                        i++;
//                    }else if (massive1[i] < massive2[j]) {
//                        int a = massive2[j];
//                        massive3[k] = a;
//                        j++;
//                    }else {
//                        int b = massive1[i];
//                        massive3[k] = b;
//                        i++;
//                    }
//                    if(k == I){
//                        break;
//                    }
//                    counter++;
//                }
//            for(i = 0; i<n; i++){
//                if(massive3[i] != 0){
//                    massive2[i] = massive3[i];
//                }else{
//                    massive2[i] = 99999;
//                }
//            }
//            for(int i=0; i<n; i++){
//                massive1[i] = 99999;
//            }
//            K = 0;
//            tic[1] = false;
//        }
//        counter++;
//        for(int i=0; i<n; i++){
//            massive3[i] = 99999;
//        }
//
////        for(int i=0; i<n; i++){
////            cout<<massive1[i]<<endl;
////        }
////        cout<<endl;
////        for(int i=0; i<n; i++){
////            cout<<massive2[i]<<endl;
////        }
//       // cout<<"_____________"<<endl;
//        if(I==n-1){
//            break;
//        }
//    }
//    cout<<"counter:"<<counter<<endl;
////    for(int i=0; i<n; i++){
////        cout<<massive2[i]<<endl;
////    }
////    cout<<"_____________"<<endl;
////    for(int i=0; i<n; i++){
////        cout<<massive2[i]<<endl;
////    }
//}//idea Cannon Sort
////we have one massive full of un sorted elements and two small massive, where we put elements from big massive buy size if element on top of big massive is smaller than element on top of each of small massive we put element on top of that small massive
////else we merge two small massive into massive3 and then we put into massive2 massive3 and so on
