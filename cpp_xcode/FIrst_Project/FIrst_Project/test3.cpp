////
////  test3.cpp
////  FIrst_Project
////
////  Created by Данил on 15.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//
//#include<iostream>
//using namespace std;
//const int n=3;
//int k[n][n];
//int main(){
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++)
//        cin>>k[i][j];
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout<<k[i][j]<<"\t";
//        }
//        cout<<endl;
//        
//    }
//    int h;
//    for(int i=0;i<n/2;i++){
//        for(int j=i;j<n-1-i;j++){
//             h = k[i][j];
//            k[i][j]=k[j][n-1-i];
//            k[j][n-1-i]     = k[n-1-i][n-1-j];
//            k[n-1-i][n-1-j] = k[n-1-j][i];
//            k[n-1-j][i]     = h;
//        }
//    }
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cout<<k[i][j]<<"\t";
//        }
//        cout<<endl;
//
//    }
//    
//}
