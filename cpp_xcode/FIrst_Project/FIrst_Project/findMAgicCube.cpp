////
////  findMAgicCube.cpp
////  FIrst_Project
////
////  Created by Данил on 03/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int main(){
//    int matrix[3][3];
//    for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//            matrix[i][j] = 0;
//        }
//    }
//    int max = 750;
//    int num = 0;
//    bool same;
//    long oldSum = 0;
//    while(true){
//        int sameSum = 0;
//        long sum = 0;
//        for(int i=0; i<3; i++){
//            for(int j = 0; j<3; j++){
//                srand(time(NULL));
//                matrix[i][j] = rand()%max;
//            }
//        }
//        
//            for(int i=0; i<3; i++){
//                oldSum+=matrix[i][0];
//            }
//        
//            for(int i=0; i<3; i++){
//                for(int j=0; j<3; j++){
//                    sum+=matrix[i][j];
//                }
//                if(sum == oldSum){
//                    sameSum++;
//                    sum = 0;
//                    continue;
//                }
//                    break;
//            }
//        for(int i=0; i<3; i++){
//            for(int j=0; j<3; j++){
//                sum+=matrix[j][i];
//            }
//            if(sum == oldSum){
//                sameSum++;
//                sum = 0;
//                continue;
//            }
//            break;
//        }
//        sum+=matrix[0][0];
//        sum+=matrix[1][1];
//        sum+=matrix[2][2];
//        if(sum == oldSum){
//            sameSum++;
//        }
//        sum = 0;
//        sum+=matrix[0][2];
//        sum+=matrix[1][1];
//        sum+=matrix[2][0];
//        if(sum == oldSum){
//            sameSum++;
//        }
//        int counter = 0;
//        for(int i=0; i<3; i++){
//            for(int j=0; j<3; j++){
//                if(matrix[i] != matrix[j]){
//                    counter++;
//                }
//            }
//        }
//        
//        if(counter == 9){
//            same = false;
//        }else{
//            same = true;
//        }
//        
//        if(sameSum == 8 && !same){
//            break;
//        }
//    }
//    for(int i=0; i<9; i++){
//        cout<<matrix[i]<<endl;
//    }
//    
//    for(int i=0; i<3; i++){
//        for(int j=0; j<3; j++){
//            cout<<matrix[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//    
//}
