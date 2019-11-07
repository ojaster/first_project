////////
////////  Isaac_Newton's_sort.cpp
////////  FIrst_Project
////////
////////  Created by Данил on 14/08/2019.
////////  Copyright © 2019 Daniil. All rights reserved.
////////
////////    const long n = 10;
//////    const int num = 20;
//////    int massive1[n];
//////    for(int i=0; i<n; i++){
//////        massive1[i] = rand()%num-1;
//////    }
//////    int massive2[num+n];
//////    for(int i=0; i<n+num; i++){
//////        massive2[i] = 0;
//////    }
//////    int finalMassive3[n];
//////    for(int i=0; i<n; i++){
//////        cout<<massive1[i]<<endl;
//////    }
//////    cout<<"_______"<<endl;
//////    int i = 0;
//////    while(true){
//////        if(massive2[massive1[i]] == 0){
//////            massive2[massive1[i]] = massive1[i];
//////        }
//////        i++;
//////      //  j++;
//////        if(i == n){
//////            break;
//////        }
//////    }
//////    for(int i=0; i<n; i++){
//////        for(int j =0; j<n; j++){
//////            if(massive1[i] == massive2[j]){
//////
//////            }
//////        }
//////    }
//////    i = 0;
//////    int j =0;
//////    for(int k=0; k<n; k++){
//////            if(i >= n/2) {
//////                int a = massive2[j];
//////                finalMassive3[k] = a;
//////                j++;
//////            } else if (j >= n/2) {
//////                int a = massive1[i];
//////                finalMassive3[k] = a;
//////                i++;
//////            }else if (massive1[i] < massive2[j]) {
//////                int a = massive1[i];
//////                finalMassive3[k] = a;
//////                i++;
//////            }else {
//////                int b = massive2[j];
//////                finalMassive3[k] = b;
//////                j++;
//////            }
//////            }
//////    for(int i=0; i<num*2; i++){
//////        cout<<massive2[i]<<endl;
//////    }
//////    cout<<"end"<<endl;
////#include <stdio.h>
////#include <iostream>
////#include <stdlib.h>
////using namespace std;
////int main(){
////        srand(time(NULL));
////        const long n = 10;
////        const long num = 20;
////        int massive1[n];
////        for(int i=0; i<n; i++){
////            massive1[i] = rand()%num+1;
////        }
////        int same = 1;
////        int max = 0;
////        for(int i=0; i<n; i++){
////            same = 1;
////            for(int j =0; j<n; j++){
////                if(j==i){
////                    j++;
////                }
////                if(massive1[i] == massive1[j]){
////                    same++;
////                }
////                if(same > max){
////                    max = same;
////                }
////            }
////        }
////        const long num2 = max;
////        int massive2[num+1][num2];
////        for(int i=0; i<num+1; i++){
////            for(int j=0; j<num2; j++){
////                massive2[i][j] = 0;
////            }
////        }
////    for(int i=0; i<n; i++){
////        cout<<massive1[i]<<endl;
////    }
////    cout<<"_______"<<endl;
////    //with for
////        int j = 0;
////    for(int i=0; i<n; i++){
////        if(j == num2){
////            j = 0;
////        }
////            if(massive2[massive1[i]][j] != 0){
////                j++;
////                i--;
////            }else{
////                massive2[massive1[i]][j] = massive1[i];
////            //    cout<<massive2[massive1[i]][j]<<" ";
////            }
////        }
////    //with while
////    //int i=0;
////    //  while(true){
////    //      massive2[massive1[i]][i] = massive1[i];
////    //      if(i == n){
////    //            break;
////    //      }
////    // }
////    for(int i=0; i<num+1; i++){
////        for(int j=0; j<num2; j++){
////            cout<<massive2[i][j]<<" ";
////        }
////        cout<<endl;
////    }
////    cout<<"_________"<<endl;
////        int massive[n];
////        int index = 0;
////        j = 0;
////    int k =0;
////    while(index!=n){
////        cout<<massive2[k][j]<<" ";
////        if(massive2[k][j] != 0){
////            massive[index] = massive2[k][j];
////            index++;
////        }
////        if(j == num2-1){
////            j = 0;
////            k++;
////            continue;
////        }
////            j++;
////    }
////        for(int i=0; i<n; i++){
////            cout<<massive[i]<<endl;
////        }
////        cout<<"end"<<endl;
////}
////////it sorts using elements values, element with big value will get big boost and come first down and smallest get small boost and come down last.
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//    srand(time(NULL));
//    const long n = 1000000;
//    const long num = 10;
//    int massive1[n];
//    for(int i=0; i<n; i++){
//        massive1[i] = rand()%num+1;
//    }
//    int massive2[num+1];
//    for(int i=0; i<num+1; i++){
//            massive2[i] = 0;
//    }
////    for(int i=0; i<n; i++){
////        cout<<massive1[i]<<endl;
////    }
////    cout<<"________"<<endl;
//    int counter = 0;
//    int i =0;
//    
//    while(true) {
//        int j = massive2[massive1[i]];
//        int num = massive1[i];
//        while(num == massive1[i]){
//            massive2[massive1[i]] = ++j;
//         //  counter++;
//            i++;
//        }
//        if(i == n){
//            break;
//        }
//    }
////    for(int i=0; i<num+1; i++){
////        cout<<massive2[i]<<endl;
////    }
////    cout<<"_________"<<endl;
//    int j = 0;
//    int index = 0;
//    while(j!=n) {
//        if(massive2[index] != 0) {
//            i = 0;
//            while(i != massive2[index]){
//                massive1[j] = index;
//                i++;
//                j++;
//              //  counter++;
//            }
//        }
//        index++;
//    }
////    for(int i=0; i<n; i++){
////        cout<<massive1[i]<<endl;
////    }
//   // cout<<"counter:"<<counter<<endl;
//    cout<<"end"<<endl;
//}
