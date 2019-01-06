////
////  2darray4.cpp
////  FIrst_Project
////
////  Created by Данил on 25.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//    int **a;//объявляем указатель на указатель
//    int n=-1;
//    int minSum=999999,indexMin=-1;
//    do{
//        cin>>n; /// 1,2 ..... +
//    }while(n<1);
//    a=new int*[n];//выделяем память под массив указателей строк
//    
//    //проходим по каждой строке и выделяем память под элементы каждой строки
//    for(int i =0; i<n; i++){
//        a[i]=new int[n];
//    }
//    //Заполняем двумерный массив рандомными значениями
//    int left = 1;
//    int right = 8;
//    for(int i =0; i<n; i++){
//        for(int j =0; j<n; j++){
//            a[i][j]=rand()%(right+1-left)+left; //rand()%(b+1-a)+a
//            cout<<a[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    
//    int sum=0;
//    for(int i=0; i<n; i++){
//        for(int j=0; j<n;j++){
//            if(a[i][j]%2!=0){ //считаем сумму нечетных элементов каждой строки
//                sum+=a[i][j];
//            }
//        }
//        
//        if(sum<minSum){
//            minSum=sum;
//            indexMin = i;//запоминаем индекс строки (на данный момент с минимальной суммой нечетных элементов)
//        }
//        
//        cout<<"#"<<sum<<endl;
//        sum=0;
//    }
//    
//    cout<<minSum<<endl;
//    cout<<indexMin<<endl;
//    
//    int **b;
//    b=new int*[n];
//    for(int i=0;i<n; i++){
//        b[i]=new int [n];
//    }
//    
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            b[i][j]=a[i][j] + minSum;
//            cout<<b[i][j]<<"\t";
//        }
//        cout<<endl;
//    }
//    
//    
//    for(int i=0; i<n; i++){
//        delete b[i];
//    }
//    delete b;
//    
//    for(int i=0; i<n; i++){
//        delete a[i];
//    }
//    delete a;
//}
