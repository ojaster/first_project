////
////  backpack1.cpp
////  FIrst_Project
////
////  Created by Данил on 31/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//struct Stuff{
//    int weight;
//    int cost;
//    void operator =(Stuff stuff){
//        weight = stuff.weight;
//        cost = stuff.cost;
//    }
//};
//bool findBiggest(Stuff stuff[5]);
//int main(){
//   const int n = 5;
//    Stuff stuff[n];
//    for(int i=0; i<n; i++){
//        cout<<"input weight:";
//        cin>>stuff[i].weight;
//        cout<<"input cost:";
//        cin>>stuff[i].cost;
//        cout<<endl;
//    }
//    Stuff stuff1[n];
//    for(int i = 0; i<n; i++){
//        stuff1[i].weight = 0;
//        stuff1[i].cost = 0;
//    }
//
////    int flag = 0;
////    if(!findBiggest(stuff)){
////        for(int i=0; i<n; i++) {
////            for(int j = 0; j < n - 1 - i; j++){
////                float costPerKg = stuff[j].cost / stuff[j].weight;
////                float costPerKg1 = stuff[j+1].cost / stuff[j+1].weight;
////                if(costPerKg < costPerKg1){
////                    Stuff temp = stuff[j+1];
////                    stuff[j+1] = stuff[j];
////                    stuff[j] = temp;
////                    flag++;
////                }
////            }
////            if(flag == 0){
////                break;
////            }
////    }
////    }else{
////        flag = 0;
////        for(int i=0; i<n; i++) {
////            for(int j = 0; j < n - 1 - i; j++){
////                if(stuff[j].cost < stuff[j+1].cost){
////                    Stuff temp = stuff[j+1];
////                    stuff[j+1] = stuff[j];
////                    stuff[j] = temp;
////                    flag++;
////                }
////            }
////            if(flag == 0){
////                break;
////            }
////        }
////    }
//
//   int  flag = 0;
//for(int i=0; i<n; i++) {
//    for(int j = 0; j < n - 1 - i; j++){
//            if(stuff[j].cost < stuff[j+1].cost){
//                Stuff temp = stuff[j+1];
//                stuff[j+1] = stuff[j];
//                stuff[j] = temp;
//                flag++;
//            }
//        }
//    if(flag == 0){
//        break;
//    }
//}
//
//    int oldSum = 0;
//    Stuff temp[5];
//    for(int i=0; i<n; i++){
//        temp[i].weight = 0;
//        temp[i].cost = 0;
//    }
//    Stuff tempForStuff[5];
//    for(int j=0; j<n; j++){
//        int newSum = 0;
//        for(int i=0; i<n; i++){
//            tempForStuff[i] = stuff[i];
//        }
//        int sum = 0;
//        int k = 0;
//        for(int i=j; i<n; i++){
//            if(sum == 15){
//                break;
//            }else if(sum + stuff[i].weight > 15 && stuff[i].weight != 15){
//                stuff[i].weight = 0;
//                stuff[i].cost = 0;
//                k++;
//            }else if(sum != 15){
//                stuff1[k].weight = stuff[i].weight;
//                stuff1[k].cost = stuff[i].cost;
//                k++;
//            }
//            sum += stuff1[i].weight;
//        }
//        for(int i=0; i<n; i++){
//            newSum+=stuff1[i].cost;
//        }
//        for(int i=0; i<n; i++){
//            stuff[i] = tempForStuff[i];
//        }
//        if(newSum>oldSum){
//            oldSum = newSum;
//            for(int i=0; i<n; i++){
//                temp[i] = stuff1[i];
//            }
//        }
//        for(int i=0; i<n; i++){
//            stuff1[i].weight = 0;
//            stuff1[i].cost = 0;
//        }
//    }
//
//    for(int i=0; i<n; i++){
//        stuff1[i] = temp[i];
//    }
//
//    for(int i=0; i<n; i++){
//        cout<<stuff1[i].weight<<" "<<stuff1[i].cost<<endl;
//    }
//}
//
//bool findBiggest(Stuff stuff[5]){
//    int n;
//    Stuff temp;
//    for(int i=0; i<5; i++){
//        n = 0;
//        temp = stuff[i];
//        stuff[i].cost = 0;
//        stuff[i].weight = 0;
//        int sum = 0;
//        for(int j=0; j<5; j++){
//            sum += stuff[j].cost;
//            if(temp.cost > sum){
//                n++;
//            }
//        }
//        if(n == 5){
//            stuff[i] = temp;
//            return true;
//        }
//        stuff[i] = temp;
//    }
//    return false;
//}
