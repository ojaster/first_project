////
////  MyVector.cpp
////  FIrst_Project
////
////  Created by Данил on 26/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdexcept>
//using namespace std;
//class MyVector{
//public:
//    int *p;//pointer on the array
//    int i;//last existance index in the array
//    int n;
//    int j;
//    MyVector(){
//        n = 10;
//        p = new int[n];
//        i =0;
//    }
//    MyVector(int n){
//        p = new int[n];
//        i =0;
//    }
//    void push_back(int x){
//        p[i]=x;
//        i++;
//        if(i == n){
//            resize();
//        }
//        
//    }
//    void resize(){
//        cout<<"resize()"<<endl;
//        if(i == n){
//            //resize()
//            int *temp = p;
//            for(int j = 0; j<n; j++){
//                temp[j] = p[j];
//            }
//            n = n * 2;
//            p = new int[n];
//            //переписываешь все в p
//            for(int j = 0; j<n; j++){
//                p[j] = temp[j];
//            }
//            delete temp;
//        }
//    }
//    bool empty(){
//        if(i == 0){
//            return true;
//        }else{
//            return false;
//        }
//    }
//    void remove(){
//        if(!empty()){
//            pop_back();
//        }else{
//            cout<<"your vector is empty"<<endl;
//        }
//    }
//    int pop_back(){//удаляет последний существующий элемент
//        if(i-1>=0){
//            int temp  = p[i];
//            i--;
//            return temp;
//        }else{
//            throw std::invalid_argument( "vector is empty" );
//        }
//    }
//    
//    int * end(){
//        return (p+i);//возвращает указатель на область за последним элементом
//    }
//    
//    int * begin(){
//        return p; //указатель на начало массива
//    }
//    friend ostream & operator <<(ostream & os, MyVector vector){
//       
//            for(int * j = vector.begin(); j!=vector.end(); j++){
//            os<<(*j)<<endl;
//            }
//      
//        return os;
//    }
//    int size(){
//        return i;
//    }
//    int capacity(){
//        return n;
//    }
//    void clear(){
//        i=0;
//        //подумать как именно очищать массив
//    }
//    void reverse(){
//        int temp;
//        int saveNumber = i;
//        for(int  j = 0; j<i/2; j++, saveNumber--){
//            temp = p[saveNumber];
//            p[saveNumber] = p[j];
//            p[j] = temp;
//        }
//    }
//    void swap(MyVector & n){
//        MyVector temp;
//        temp = n;
//        n = *this;
//        *this = temp;
//    }
//    
//    int at(int n){
//        if(n<i && n>=0){
//        return p[n];
//        }else{
//            throw std::invalid_argument( "vector is empty" );
//        }
//    }
//    
//};
//
////int main(){
////    MyVector vector;
////    MyVector vector2;
////    vector.push_back(10);
////    vector.push_back(20);
////    cout<<"vec"<<endl;
////    cout<<vector<<endl;
////    vector2.push_back(20);
////    vector2.push_back(10);
////    cout<<"vec2"<<endl;
////    cout<<vector2<<endl;
////    cout<<"swap"<<endl;
////    vector.swap(vector2);
////    cout<<"vec"<<endl;
////    cout<<vector<<endl;
////    cout<<"vec2"<<endl;
////    cout<<vector2<<endl;
////    cout<<"at"<<endl;
////    cout<<vector.at(0)<<endl;
////    cout<<"vec"<<endl;
////    cout<<vector<<endl;
////    vector.push_back(20);
////    vector.push_back(30);
////    cout<<vector<<endl;
////    vector.pop_back();
////    cout<<vector<<endl;
////    for(int * j = vector.begin(); j!=vector.end(); j++){
////        cout<<*j<<endl;
////    }
//    
////}
