////
////  lambda2.cpp
////  FIrst_Project
////
////  Created by Данил on 19/01/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <unordered_map>
//using namespace std;
//int main(){
//    vector<int> v1 = {1,2,3,4};
//    vector<int> v2 = {1,2,3,4,5};
//    
//    auto pushInto = [&](int m){
//        v1.push_back(m);
//        v2.push_back(m);
//    };
//    
//    pushInto(20);
//    
//    auto show = [v1] () {
//        for(auto p : v1){
//            cout<<p<<" ";
//        }
//    };
//    show();
//    int N = 5;
//    vector<int>::iterator p = find_if(v1.begin(), v1.end(), [N](int a){
//        return a > N;
//    });
//    
//    cout<<"First number greater than 5 is :"<< *p<<endl;
//    
//    int count_N = count_if(v1.begin(), v1.end(), [=](int a){
//        return a >= N;
//    });
//    cout<<"The number of elements greater than or equal to 5 is:"<<count_N<<endl;
//    
//    
//    function<bool(const int  &, const int  &)>
//    derefUPLess = [] (const int & a, const int&  b) {
//        return a>b;
//    };
//    
//    vector<int> v;
//  //  unsigned sz = v.size();
//    auto sz = v.size();
//    
//    unordered_map<string, int> m;
//    for(const pair<const string, int> & p : m){
//        //что-то делаем
//    }
//}
