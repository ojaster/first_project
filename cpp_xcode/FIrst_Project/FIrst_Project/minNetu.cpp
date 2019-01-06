//
//  minNetu.cpp
//  FIrst_Project
//
//  Created by Данил on 15.09.18.
//  Copyright © 2018 Daniil. All rights reserved.
//

//#include <iostream>
//#include <vector>
//using namespace std;
//
//void input(vector<int>&arr);
//void outPut(vector<int>&arr);
//int motion(vector<int> & arr);
//int findMinPositiveNumber(vector<int> & arr);
//int main(){
//    vector<int>arr;
//    input(arr);
//    outPut(arr);
//    outPut(arr);
//    findMinPositiveNumber(arr);
//    
//}
//
//void input(vector<int> & arr){
//    int element;
//    for(int i=0; i<5; i++){
//        cin>>element;
//        arr.push_back(element);
//    }
//}
//
//void outPut(vector<int> & arr){
//    for(int i=0; i<arr.size(); i++){
//        cout<<arr[i]<<endl;
//   }
//}
//
//void swap(int *a, int *b) {
//    int temp = *a;
//    *a = *b;
//    *b = temp;
//}
//
////Перемещаем все отрицательные элементы в левую сторону
////функция возвращает количество отрицательных элементов
//int motion(vector<int> & arr){
//    int j = 0; //количество отрицательных элементов
//    for(int i=0; i<arr.size(); i++){
//        if(arr[i]<0){
//            swap(&arr[i], &arr[j]);
//            j++;
//        }
//    }
//    return j;
//}
//
//int find(vector<int> & arr, int shift){
//    //  [-1{0} 4{1} 5{2} 6{3} 7{4}]
//    int size = (int)arr.size()-shift;
//    for(int i=shift; i<size; i++){
//        int index = abs(arr[i])-1;
//        if(index < size && arr[index]>0){
//            arr[index] = - arr[index];
//        }
//    }
//    
//    for(int i =0;i<size; i++){
//        if(arr[i]>0){
//            return i+1;
//        }
//    }
//    return size+1;
//}
//
//
//int findMinPositiveNumber(vector<int> & arr){
//    int shift = motion(arr); //количество отрицательных элементов
//    int result = find(arr, shift);
//    cout<<result<<endl;
//    return result;
//}
