////
////  plusOne.cpp
////  FIrst_Project
////
////  Created by Данил on 14/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//
//void sumDigits(string a, string b);
//
//int main(){
//    string a = "1110";
//    string b = "1111";
//    //----11101
//    
//    sumDigits(a, b);
//    int j = 0;
//    string arr = "----";
////    for(int i = 0; i<3; i++){
////        int x  = a[i];
////        int y  = b]i];
////    }
//    for(int i=0; i<6; i++){
//        if(a[i] == b[i] && a[i] == '1'){
//            j = i + 1;
//        }
//        if(j == i){
//            if(a[i] == '0' && b[i] == '0'){
//                arr[i] = '0';
//            }else{
//                arr[i] = '1';
//            }
//        }else{
//            if(arr[i] != '1'){
//                arr[i] = '0';
//            }
//            arr[j] = '1';
//        }
//    }
//    cout<<arr<<endl;
//   
//}
//
////101
////010
//
//void sumDigits(string a, string b){
//    int lengthA = a.size();
//    int lengthB = b.size();
//    int addition = 0;
//    int i = 0;
//    int res = 0;
//    
//    while(i < lengthA || i<lengthB || addition!=0) {
//        int x = 0, y = 0;
//        if(i < lengthA){
//            x = (int)a[lengthA - 1 - i] - '0'; // -'0'
//        }
//        if(i < lengthB){
//            y = (int)b[lengthB- 1 - i] - '0'; // -'0'
//        }
//        res += ((x + y + addition) % 2)*10*i;
//        addition = (x + y + addition) / 2;
//        i++;
//    }
//    cout<<res<<endl;
//}
