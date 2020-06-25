////
////  g.cpp
////  FIrst_Project
////
////  Created by Данил on 22/03/2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <set>
//#include <unordered_set>
//#include <map>
//#include <unordered_map>
//#include <thread>
//using namespace std;
////template <typename RandomAccessIterator, typename F>
////void ptransform(RandomAccessIterator begin, RandomAccessIterator end, F && f){
////    auto size = std::distance(begin, end);
////    if (size <= 100) {
////        transform(begin, end, begin, std::forward<F>(f));
////    }else{
////        std::vector<std::thread> threads;
////        int thread_count = std::thread::hardware_concurrency();
////        auto first = begin;
////        auto last = first;
////        size /= thread_count;
////        for(int i =0; i< thread_count; i++){
////            first = last;
////            if (i == thread_count - 1){
////                last = end;
////            }
////            else{
////                std::advance(last, size);
////            }
////            threads.emplace_back([first,last,&f](){
////                transform(first, last, first, std::forward<F>(f));
////            });
////        }
////        for (auto &t : threads){
////            t.join();
////        }
////    }
////}
////template <typename T, typename F>
////vector<T> palter(vector<T> data, F &&f) {
////    ptransform(begin(data), end(data), forward<F>(f));
////    return data;
////}
//
//void absd(){
//    cout<<"hello world"<<endl;
//}
//int main(){
////    srand(time(0));
////    vector<int> data(1000000);
////    auto result =  palter(
////                          data,
////                          [](int const e){
////                                return e*e;
////                            }
////    );
////    cout<<clock()/1000.0<<endl;
////   // cout<<result<<endl;
//    std::thread th(absd);
//    th.join();
//    cout<<"hello world"<<endl;
//
//
//}
