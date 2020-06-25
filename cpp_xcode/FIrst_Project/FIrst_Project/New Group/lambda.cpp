////
////  lambda.cpp
////  FIrst_Project
////
////  Created by Данил on 18/01/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <functional>
//using namespace std;
//void printVec(vector<int> v){//o(n)
//    for_each(v.begin(), v.end(), [](int i){
//        cout<<i<<" ";
//    });
//    cout<<endl;
//}
//
//int main(){
//    vector<int> v {4,1,3,5,2,3,1,7};
//    printVec(v);
//    vector<int>::iterator p = find_if(v.begin(), v.end(), [](int i){
//        return i>4;
//    });
//    cout<<"First number greater than 4 is:"<<*p<<endl;
//    sort(v.begin(), v.end(), [](const int&a, const int& b) -> bool{
//        return a > b;
//    });
//    printVec(v);
//    
//    int count_5 = count_if(v.begin(), v.end(), [] (int a) {
//        return (a >= 5);
//    });
//    int b1 = 9;
//    cout<<"The number of elements greater than or equal to 5 is:"<<count_5<<endl;
//    auto r =  [](int a, int b)
//       { // 1 2 3 4
//          
//           return a == b;
//       };
//    p = unique(v.begin(), v.end(), r);
//    v.resize(distance(v.begin(), p));
//    printVec(v);
//
//    
//    
//    auto square = [](int i){
//        return i*i;
//    };
//    square(5);
//}
