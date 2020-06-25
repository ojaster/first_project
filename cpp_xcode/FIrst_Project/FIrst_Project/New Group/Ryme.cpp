////
////  Ryme.cpp
////  FIrst_Project
////
////  Created by Данил on 21/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//int rarity(char ch){
//    return ch == 'I' ? 1 : ch == 'V' ? 5 : ch == 'X' ? 10 : ch == 'L' ? 50 : ch == 'C' ? 100 : ch == 'M' ? 1000 : -10;
//}
//int countt(string str){
//   // int num[256] = {0};
//    int res = 0;
////    num['I'] = 1;
////    num['V'] = 5;
////    num['X'] = 10;
////    num['L'] = 50;
////    num['C'] = 100;
////    num['M'] = 1000;
//    int i = 0;
//    while(i < str.size()){
//        if(rarity(str[i]) < rarity(str[i+1])){
//            res -= rarity(str[i]);
//        }else{
//            res += rarity(str[i]);
//        }
//        i++;
//    }
//    return res;
//}
//int main(){
//    string ryme = "MCMXCIV";
//    int num = 0;
//    for(int i = 0; i < ryme.size(); i++){
//        cout<<rarity(ryme[i])<<endl;
//        cout<<num<<endl;
//        if(rarity(ryme[i]) < num ||  rarity(ryme[i]) == num){
//            num = num + rarity(ryme[i]);
//        }else{
//            num = num - rarity(ryme[i]);
//        }
//        num = -num;
//    }
//    cout<<"______"<<endl;
//    if(num < 0){
//        cout<<-num<<endl;
//    }else{
//        cout<<num<<endl;
//    }
//    cout<<"______"<<endl;
//    cout<<countt(ryme)<<endl;
//}
