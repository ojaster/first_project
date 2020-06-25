////
////  stupid.cpp
////  FIrst_Project
////
////  Created by Данил on 13/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//char calculate(string tmp){
//     int i = 0;
//    int a = tmp[i++] - '0';
//    int b;
//    while(i != tmp.size()){
//        char symbol = tmp[i++];
//        b = char(tmp[i++]);
//        switch (symbol) {
//            case '+':
//                a+=b;
//                break;
//            case '-':
//                a-=b;
//                break;
//            case '/':
//                a/=b;
//                break;
//            case '*':
//                a*=b;
//                break;
//        }
//        if(i == tmp.size() || i > tmp.size()){
//            break;
//        }
//        
//    }
//    return char(a);
//}
//int main(){
//    string txt = "1*(2+3)";
//    string tmp = "22";
//    int i = 0;
//    int k = 0;
//    int n = 0;
//    string temp = "22";
//    while(true){
//        temp[n] = txt[i++];
//        cout<<temp[n]<<endl;
//        n++;
//        if(txt[i] == '('){
//            i++;
//            while(txt[i] != ')'){
//                tmp[k] = txt[i++];
//                cout<<tmp[k]<<endl;
//                k++;
//            }
//            k = 0;
//            n = 0;
//            txt = temp + calculate(tmp);
//        }
//        
//        if(i >= txt.size()){
//            break;
//        }
//    }
//    cout<<txt<<endl;
//}
