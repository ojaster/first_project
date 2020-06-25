////
////  3.cpp
////  FIrst_Project
////
////  Created by Данил on 08/02/2020.
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
//bool isVowel(char c) {
//     return (c=='a' || c=='A' || c=='e' ||
//           c=='E' || c=='i' || c=='I' ||
//           c=='o' || c=='O' || c=='u' ||
//           c=='U');
//   }
//using namespace std;
////template<class T, size_t R, size_t C>//row, c-column
////class array2d{
////    typedef T value_type;
////    typedef value_type* iterator;
////    typedef value_type const * const_iterator;//
////    vector<T> a;
////    int att(int r, int c) const {
////           return r*(C-1) + c;
////    }
////public:
////    array2d() : a(R*C) {}
////    explicit array2d(initializer_list<T>l): a(l){}
////    size_t at(int r, int c){
////        return a[r*(C-1) + c];
////    }
////
////    T& at(size_t const r, size_t const t){
////
////    }
////
////    T & operator() (size_t const i, size_t const j) {
////        return a[att(i,j)];
////    }
////
////    size_t size(size_t t){
////        return (t == 1) ? R : C;
////    }
////
////    const_iterator begin() const {
////        return a.data();
////    }
////
////    const_iterator end() const {
////        return a.end();
////    }
////
////    iterator begin(){
////        return a.data();
////    }
////
////    iterator end(){
////        return a.data() + a.size();
////    }
////
////    void fill(size_t t){
////        for(auto b:a){
////            a[b] = t;
////        }
////    }
////    void swap(array2d b){
////        vector<T> c = a;
////        a = b.a;
////        b.a = a;
////
////    }
////
////};
////struct pair{
////    int first;
////    int second;
////};
////int funct(char a, char b){
////    return ((a - b < 0)) ? b - a : a - b;
////}
////int main(){
////    string order = "worldabcefghijkmnpqstuvxyz";
////       map<char, int> a;
////       for(int i =0; i<order.size(); i++){
////           a[order[i]] = i;
////       }
////        for(int i =0; i<order.size(); i++){
////            if(a.find(order[i]) != a.end()){
////                cout<<i<<endl;
////            }
////          }
////    array2d<int, 2,3> a{123,123,123,123};
////    for(size_t i =0; i< a.size(1); ++i){
////        for(size_t j =0; j < a.size(2); ++j){
////            a(i,j) *= 2;
////        }
////    }
////    copy(begin(a), end(a), ostream_iterator<int>(cout," "));
////
////    array2d<int, 2,3> b;
////    b.fill(1);
////
////    a.swap(b);
////    array2d<int, 2, 3> c(move(b));
////    int massive[] = {1,2,3,4};//2 6
////    vector<int> nums;
////    for(int i:massive){
////        nums.push_back(i);
////    }
////    string s = "2-5gg-3-J";
////    int k = 2;
////    string str;
////    int counter = 0;
////    for(int i = s.size() - 1; i >= 0; i--){
////        if(s[i] != '-'){
////            if(counter!=0 && counter%k ==0){
////                str += '-';
////                counter = 0;
////            }
////            str += toupper(s[i]);
////            counter++;
////        }
////    }
////    reverse(str.begin(), str.end());
////    cout<< str<<endl;
////    counter = 0;
////    for(int i = s.size() - 1; i >= 0; i--){
////        if(s[i] != '-'){
////            counter++;
////            s[i] = toupper(s[i]);
////            continue;
////        }
////
////        if(counter != k){
////            s.erase(s.begin()+i);
////            counter = 0;
////            continue;
////        }else{
////            s[i]+='-';
////            counter = 0;
////        }
////        if(i<=k){
////            break;
////        }
////    }
////    cout<<s<<endl;
////    //cout<<((n!=0) ? false:true)<<endl;
////    cout<<int('a')<<endl;
////    string s = "abaababaab";
////    if(s.size() <= 1){
////        return false;
////    }
////    string temp;
////    int mindel = 0;
////    while(mindel != 0){
////        if(mindel % s.size() == 0){
////            break;
////        }
////        mindel++;
////    }
////    int border = s.size() / 2;
////    int index1 = 0;
////    int index2;
////    bool h = false;
////    bool g = true;
////    while(mindel == border){
////        if(index1 == border || border == s.size() / 2){
////            border--;
////            while(border % s.size() != 0){
////                border--;
////            }
////            if(h){
////                index1 = 0;
////                g = true;
////                for(int i = 0; i < s.size(); i++){
////                    if(s[index1] != s[i]){
////                        g = false;
////                        break;
////                    }
////                    index1++;
////                    if(index1 == border){
////                        index1 = 0;
////                    }
////                }
////                if(g == true){
////                    cout<<"true"<<endl;
////                }
////            }
////            index2 = border;
////            index1 = 0;//ab ab a b ab ab
////        }
////        if(s[index1] != s[index2]){
////            index1 = border;
////            h = false;
////        }
////        index1++;
////        index2++;
////    }
////    cout<<"false"<<endl;
//
//
//    
////    string str;
////    str+=s[0];
////    for(int i = 1; i < s.size(); i++){
////        if(s[0] != s[i]){
////            str+=s[i];
////        }else{
////            break;
////        }
////    }
////    int counter = 0;
////    for(int i = str.size(); i < s.size(); i++){
////        if(str[counter] != s[i]){
////            cout<<"false"<<endl;
////        }
////        counter++;
////        if(counter == str.size()){
////            counter = 0;
////        }
////    }
////    if(s.size() % str.size() == 0){
////        cout<<"true"<<endl;
////    }else{
////        cout<<"false"<<endl;
////    }
//
////    int border;
////    int index = 0;
////    bool a = false;
////    for(int i =1; i<(s.size()/2)+1; i++){
////        if(s.size() % i == 0){
////            border = i;
////            index = 0;
////            a = true;
////            for(int i = border; i< s.size(); i++){
////                if(s[index] != s[i]){
////                    a = false;
////                    break;
////                }
////                index++;
////                if(index == border){
////                    index = 0;
////                }
////            }
////            if(a == true){
////                cout<<"true"<<endl;
////            }
////        }
////    }
////    cout<<"false"<<endl;
////    cout<<thread::hardware_concurrency()<<endl;
//
//
////}
//
////100
////011
////111
//
////1*1 = 1
////0*0 = 0
////1*0 = 0
////0*1 = 0a
//
//
//void test(int n) {
//    string result = "1";
//    while(--n) {
//        string temp = "";// 12111
//        for(int j = 0; j<result.size(); j++){
//            int amount = 1;
//            while((j+1)<result.size() && (result[j] == result[j+1])){
//                amount++;
//                j++;
//            }
//            temp += to_string(amount) + result[j];
//        }
//    }
//}
