////
////  auto_exmpl.cpp
////  FIrst_Project
////
////  Created by Данил on 30/12/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <set>
//using namespace std;
////template<typename T>
////void f(ParamType param);
//template<typename T>
//void func_for_x(T param);
//
//template<typename T>
//void func_for_x(const T param);
//
///*int main(){
//    //f(expr);
//    auto x = 27;
//    func_for_x(27);
//    func_for_x(x);
//    //const auto cx = x;
//    
//    const auto & rx = x;
//}*/
////1 - ссылка или указатель (но не универсальная)
////2 универсальная ссылка
////3 ни ссылка ни указатель
//int index(char sym){
//       return sym - 'a';
//   }
//int main() {
////    auto x = 27; //3
////    const auto cx = x; // 3
////    const auto & rx = x; // 1
////
////    auto&& uref1 = x; // x - int, lvalue, тип uref1 int&
////    auto&& uref2 = cx;// cx - const int, lvalue, тип uref2 const int&
////    auto&& uref3 = 27;// 27 int rvalue, тип uref3 - int&&
////
////    const char name[] = "Hello World"; // тип name -
////    auto arr1 = name; //тип arr1 - const char *
////    auto& arr2 = name; //тип arr2 - const char (&)[13]
////
////    void someFunc(int, double); // void(int, double)
////
////    auto func1 = someFunc;//тип func1 - void(*)(int, double)
////    auto& func2 = someFunc;// func2 - void (&)(int, double)
////
////    auto x1 = 27;
////    auto x2(27);//
////
////    auto x3 = {27};//std::initializer_list<int> {27} (!!!)
////    auto x4{27};//то же самое
////    //initializer_list<T>
////    auto x5= {1, };
////
////    auto x6 = {11, 23, 9};
////    template<typename T>
////    void f(initializer_list<T> param);
////
////    f({11, 23, 9});// ошибка
//    string s = "pwwkew";
////           int counter = 0;
////           int max = -1;
////           int massive[27] = {0};
////           for(int i = 0; i<s.size(); i++){
////               if(s[i] < 'a'){
////                   s[i] = 'a' + 26;
////               }
////               if(massive[s[i] - 'a'] == 1){
////                   counter = 0;
////                   memset( massive, 0, 27*sizeof(int));
////               }
////               cout<<s[i] - 'a'<<endl;
////               if(massive[s[i] - 'a'] == 0){
////                       counter ++;
////                       massive[s[i] - 'a'] = 1;
////                   if(massive[s[i-1] - 'a'] == 0 && i - 1 >= 0){
////                       cout<<s[i-1] - 'a'<<endl;
////                       counter ++;
////                       massive[s[i-1] - 'a'] = 1;
////                   }
////
////               }
////               if(counter > max){
////                   max = counter;
////               }
////           }
////    cout<<max<<endl;
////
////
////    if(s.size() == 0){
////        return 0;
////    }
////          int max = 0;
////            int n = 0;
////             int massive[27] = {0};
////               for(int i = 0; i<s.size(); i++){
////                   if(s[i] < 'a'){
////                       s[i] = 'a' + 26;
////                   }
////                   if(massive[s[i] - 'a'] == 1){
////                       memset( massive, 0, 27*sizeof(int));
////                       n = i-1;
////                   }
////                   if(massive[s[i] - 'a'] == 0){
////                           massive[s[i] - 'a'] = 1;
////                   }
////                   if(i - n + 1 > max){
////                       max = i - n + 1;
////                   }
////               }
////            for(int i = s.size()-1; i > 0; i--){
////                      if(s[i] < 'a'){
////                          s[i] = 'a' + 26;
////                      }
////                      if(massive[s[i] - 'a'] == 1){
////                          memset( massive, 0, 27*sizeof(int));
////                          n = i+1;
////                      }
////                      if(massive[s[i] - 'a'] == 0){
////                              massive[s[i] - 'a'] = 1;
////                      }
////                      if(n - i + 1 > max){
////                          max = n - i + 1;
////                      }
////                  }
//    int i = 0;
//    int j = 0;
//    int max = 0;
//    set<char> massive;
//    while(i < s.size()){
//        if(massive.find(s[i]) == massive.end()){
//            massive.insert(s[i]);
//            i++;
//            max = (massive.size() > max) ? massive.size() : max;
//        }else{
//            massive.erase(s[j]);
//            j++;
//        }
//    }
//    //return max;
//    cout<<max<<endl;
//}
