//
//  8.cpp
//  FIrst_Project
//
//  Created by Данил on 09.12.18.
//  Copyright © 2018 Daniil. All rights reserved.
//
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int const n=10;
//
//
//void search(int * arr, int n,int l){
//    int c = 0;
//    for(int i=0; i<n; i++){
//        c = 1;
//        for(int j=i+1; j<n; j++){
//            if(arr[j]==arr[i]){
//                c++;
//            }else{
//                break;
//            }
//        }
//        
//        if(c > l) {
//            cout<<"0"<<endl;
//            i = i + c;
//        }
//        if(c == l) {
//            for(int j = i; j<i+c; j++){
//                cout<<arr[j]<<endl;
//            }
//             i = i + l - 1;
//            
//        }else{
//            cout<<arr[i]<<endl;
//        }
//        
//    }
//}
//int main(){
//    int l;
//    cout<<"input l:";
//    cin>>l;
//    int * arr = new int [n];
//    int * dublicator = new int [n];
//    for(int i=0; i<n; i++){
//        dublicator[i] = 0;
//        cout<<"input arr:";
//        cin>>arr[i];
//       
//    }
//    
//    search(arr,n,l);
//    
//    
//    delete [] arr;
//    delete [] dublicator;
//}
