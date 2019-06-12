////
////  ar.cpp
////  FIrst_Project
////
////  Created by Данил on 02/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Calc{
//private:
//    int n = 0;
//    int array[4];
//public:
//    Calc(int * ar);
//    void show(){
//        for(int i=0; i<4; i++){
//            cout<<array[i]<<endl;
//        }
//    }
//    int findCount();
//    void umn();
//    void delenil();
//    int max(){
//        int max = 0;
//        for(int i=0; i<n; i++){
//            if(array[i] > max){
//                max = array[i];
//            }
//        }
//        return max;
//    }
//    int min(){
//        int min = 99999;
//        for(int i=0; i<n; i++){
//            if(array[i] < min){
//                min = array[i];
//            }
//        }
//        return min;
//    }
//    int elementSum();
//    int middleSum();
//    void poelement(int arr[4]);
//    void minusMassive(int * arr);
//};
//void Calc::minusMassive(int * arr){
//    for(int i=0; i<n; i++){
//        array[i]-=arr[i];
//    }
//}
//void Calc::poelement(int arr[4]){
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n; j++){
//            array[i]+=arr[j];
//        }
//    }
//}
//int Calc::elementSum(){
//    int z = 0;
//    for(int i=0; i<n; i++){
//        z+=array[i];
//    }
//    return z;
//}
//int Calc::middleSum(){
//    return elementSum() / n;
//}
//int Calc::findCount(){
//    return n;
//}
//void Calc::umn(){
//    for(int i = 0; i<n; i++){
//        array[i] *= array[i];
//    }
//}
//Calc::Calc(int * ar){
//    for(int i=0; i<4; i++){
//        n++;
//        array[i] = ar[i];
//    }
//}
//void Calc::delenil(){
//    for(int i = 0; i<n; i++){
//        array[i] /= array[i];
//    }
//}
//int main(){
//    int array[4];
//    int i = 0;
//    while(i != 4){
//        cin>>array[i];
//        i++;
//    }
//    //array[0] *(array)
//    //array[1] *(array+1)
//    Calc ar(array);//имя массива = УКАЗАТЕЛЬ НА ПЕРВЫЙ ЭЛЕМЕНТ
//    cout<<"show"<<endl;
//    ar.show();
//    cout<<"count"<<endl;
//    cout<<ar.findCount()<<endl;
//    cout<<"working *"<<endl;
//    ar.umn();
//    cout<<"after * show"<<endl;
//    ar.show();
//    //cout<<"working /"<<endl;
//    //ar.delenil();
//    //cout<<"after / show"<<endl;
//    //ar.show();
//    cout<<"min"<<endl;
//    cout<<ar.min()<<endl;
//    cout<<"max"<<endl;
//    cout<<ar.max()<<endl;
//    cout<<"minus massive"<<endl;
//    ar.minusMassive(array);
//    cout<<"after show"<<endl;
//    ar.show();
//
//
//
//}
//
