////
////  zadaha2.cpp
////  FIrst_Project
////
////  Created by Данил on 02/02/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <algorithm>
//#include <stdlib.h>
//#include <functional>
//#include <string>
//#include <ctype.h>
//#include <numeric>
//using namespace std;
////S = pi*d*2/4
////Sквадрата = d*d
////pi/4
////template<typename E = std::mt19937,
////typename D = std::unifirom_readl_distribution<>>
////double computePi(E & engine, D & dist, int const samples = 100000){
////
////}
//bool isCorrect(char s) {
//    return s >= '0' && s <= '9';
//}
// int w = 10;
//
//int  name(int const total, char const c) {
//    return total + w-- * (c-'0');
//}
//
//bool validate_isbn_10(string isbn){
//    bool valid = false;
//    if(isbn.size() == 10 && count_if(isbn.begin(), isbn.end(), isCorrect)){
//            int sum = accumulate(isbn.begin(), isbn.end(), 0, name);
//        valid = !(sum % 11);
//    }
//    return valid;
//}
//int main(){
//    cout<<validate_isbn_10("12312321321")<<endl;
//    string str = "1234567891";
//    int num = 0;
//    if(str.size() != 10){
//        return false;
//    }
//    for(int i = 0; i < 10; i++){
//        if(str[i] >= '0' && str[i] <= '9'){
//            str[i] = (str[i] - '0') * i;
//            num+=str[i];
//        }else{
//            return false;
//        }
//    }
//    if(num % 11 == 0){
//        cout<<"true"<<endl;
//    }
//}
