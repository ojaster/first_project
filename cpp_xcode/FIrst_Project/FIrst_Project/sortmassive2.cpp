////
////  2.cpp
////  FIrst_Project
////
////  Created by Данил on 24/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void sort(int * massive, int n);
//
//int main(){
//    int n;
//    cout<<"input n:";
//    cin>>n;
//    int * pArray = new int[n];
//    for(int i=0; i<n; i++){
//        cout<<"input: "<<i<<endl;
//        cin>>pArray[i];
//    }
//    int sep;
//    cout<<"input sep:";
//    cin>>sep;
//    
//    sort(pArray, sep);
//    sort((pArray+sep), (n-sep));
//
//    for(int i=0; i<n; i++){ // sep =2 [1,2,-3,4,4,5]
//        cout<<pArray[i]<<endl;
//    }
//}
//void sort(int * massive, int n){
//    for(int i = 0; i < n-1; i++){
//        for(int j = n-1; j > i; j--){
//            if(massive[j-1] > massive[j]){
//                int temp = massive[j - 1];
//                massive[j - 1] = massive[j];
//                massive[j] = temp;
//                
//            }
//        }
//    }
//}
