////
////  MergeSort.cpp
////  FIrst_Project
////
////  Created by Данил on 23/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//void mergeSort(int *a, int l, int r);
//void print(int * a);
//static int n = 0;
//int main(){
//    int massive1[10] = {1,8,9,10,45,56,63,64,65,67};
//    int massive2[10] = {5,7,10,46,49,67,68,70,90,100};
//    int massive3[20];
//    int j = 0;
//    int i = 0;
//    for(int k=0; k<20; k++){
//        if(k == 16){
//            cout<<endl;
//        }
//        if(i >= 10) {
//            int a = massive2[j];
//            massive3[k] = a;
//            j++;
//        } else if (j >= 10) {
//            int a = massive1[i];
//            massive3[k] = a;
//            i++;
//        }else if (massive1[i] < massive2[j]) {
//            int a = massive1[i];
//            massive3[k] = a;
//            i++;
//        }else {
//            int b = massive2[j];
//            massive3[k] = b;
//            j++;
//        }
//    }
////    for(int i=0; i<20; i++){
////        cout<<massive3[i]<<endl;
////    }
//    int massive[4] = {34,12,31,24/*,4,52,1,8,3,456*/};
//    mergeSort(massive, 0, 3);
//    for(int i=0; i<4; i++){
//        cout<<massive[i]<<endl;
//    }
//}
//void mergeSort(int *a, int l, int r){
//    if(l == r){
//        return;
//    }
//    int mid = (r + l) / 2;
//    mergeSort(a,l,mid);
//    mergeSort(a,mid+1,r);
//    int i = l;
//    int j = mid+1;
//    int tmp[4];
//    for(int step = 0; step < r-l+1; step++){
//        cout<<"i:"<<a[i]<<endl;
//        cout<<"j:"<<a[j]<<endl;
//        cout<<endl;
//        if((j > r) || ((i <= mid) && (a[i] < a[j]))){
//            tmp[step] = a[i];
//            i++;
//        }else{
//            tmp[step] = a[j];
//            j++;
//        }
//    }
//    print(a);
//    for(int step = 0; step<r-l+1; step++){
//        a[l + step] = tmp[step];
//    
//    }
//    cout<<endl;
//    cout<<endl;
//    print(a);
//    cout<<endl;
//}
//void print(int * a){
//    for(int i=0; i<4; i++){
//        cout<<"a:"<<a[i]<<endl;
//    }
//}
//
