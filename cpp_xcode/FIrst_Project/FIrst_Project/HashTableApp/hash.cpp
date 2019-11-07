////
////  hash.cpp
////  FIrst_Project
////
////  Created by Данил on 25/08/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Hash{
//    string * arr;
//    int maxArrSize;
//    int nowArrSize;
//    int hashFunction(int);
//    int hashFunct(string);
//public:
//    Hash(int);
//    ~Hash();
//    bool add(string);
//    bool findWord(string);
//    bool deleteh(string);
//};
//int Hash::hashFunction(int num){
//    int key = num % maxArrSize;
//    return key;
//}
//int Hash::hashFunct(string thing){
//    int sum = 0;
//    for(int i=0; i<thing.length(); i++){
//        sum+=thing[i];
//    }
//    return sum;
//}
//Hash::Hash(int size):maxArrSize(size),nowArrSize(0){
//    if(size < 3){
//        arr = new string[3];
//        maxArrSize = 3;
//    }else{
//        arr = new string[size];
//    }
//    for(int i=0; i<maxArrSize; i++){
//        arr[i] = "nope";
//    }
//}
//Hash::~Hash(){
//    delete [] arr;
//}
//
//bool Hash::add(string word){
//    if(nowArrSize != maxArrSize){
//        int key = hashFunction(hashFunct(word));
//        arr[key] = word;
//        nowArrSize++;
//        return true;
//    }
//    return false;
//}
//
//bool Hash::findWord(string word){
//   int index = hashFunction(hashFunct(word));
//    if(arr[index] == word){
//        return true;
//    }
//    return false;
//}
//bool Hash::deleteh(string word){
//    int index = hashFunction(hashFunct(word));
//    if(arr[index] == word){
//        arr[index] = "nope";
//        nowArrSize--;
//        return true;
//    }
//    return false;
//}
//int main(){
//    Hash hash(3);
//    cout<<hash.add("word")<<endl;
//    cout<<hash.findWord("bye")<<endl;
//    cout<<hash.add("bye")<<endl;
//    cout<<hash.findWord("word")<<endl;
//    cout<<hash.findWord("byee")<<endl;
//    cout<<hash.deleteh("bye")<<endl;
//    cout<<hash.findWord("bye")<<endl;
//    cout<<hash.findWord("bye")<<endl;
//    cout<<hash.add("bye")<<endl;
//    cout<<hash.findWord("word")<<endl;
//    cout<<hash.findWord("byee")<<endl;
//    cout<<hash.deleteh("bye")<<endl;
//    cout<<hash.findWord("bye")<<endl;
//}
