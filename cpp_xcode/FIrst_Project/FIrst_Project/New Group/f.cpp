////
////  f.cpp
////  FIrst_Project
////
////  Created by Данил on 11/01/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <deque>
//using namespace std;
//
//class Widget{
//    
//};
//
//struct Point{
//    int x, y;
//}; //decltype(Point::x) - int //decltype(Point::y) - int
//
////bool f(const Widget & w); // decltype(w) - const Widget & //decltype(f) - bool(const Widget &)
//
//
//template<typename T>
//class vector {
//public:
//    T & operator[](std:: size_t index); //std::deque -> T&, std::vector -> T&,   std::vector<bool>  ---> operator[]  !=  bool&
//};
//deque<int> d;
//void authUser(){
//    cout<<endl;
//}
//
////template<typename Container, typename Index>
////decltype(auto)
////authAndAccess(Container && c, Index i) { //trailing return type
////    authUser();
////    return std::forward<Container>(c)[i];
////}
//template<typename Container, typename Index>
//auto authAndAccess(Container && c, Index i) -> decltype(std::forward<Container>(c)[i]){ //trailing return type
//    authUser();
//    return std::forward<Container>(c)[i];
//}
//
//deque<string> makeStringDeque(); //фабричная функция
//
//int main(){
//    
//    auto s = authAndAccess(makeStringDeque(), 5);
//    
//    Widget w;
//    const Widget & cw = w;
//    auto myWidget1 = cw; //вывод типа auto : тип myWidget1 - Widget
//    
//    decltype(auto) myWidget2 = cw; // вывод типа decltype: тип myWidget2 - const Widget2
//    
//    
//    cout<<">"<<endl;
//    //authAndAccess(d, 5) = 10; // d[5] -> int ... rvalue
//     cout<<">"<<endl;
//    //vector<int> v; // decltype(v) - vector<int>
//     
//    //if(v[0] == 0){ //decltype(v[0]) - int &
//        
//    //}
//    const int i = 0; //decltype(i) - const int
//    //cout<<decltype(i)<<endl;
//    //Widget w; //decltype(w) - Widget
//    
//    //if(f(w)) { } // decltype(f(w)) - bool
//}
