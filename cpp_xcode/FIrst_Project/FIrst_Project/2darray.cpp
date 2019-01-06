////
////  2darray.cpp
////  FIrst_Project
////
////  Created by Данил on 24.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int main(){
//    int **a;//для выделения памяти под двумерный массив нам требуется "указатель на указатель"
//    int n=-1;
//    int m=-1;
//    
//    do{// этот цикл выполнится 1 раз в любом случае 
//        cout<<"n and m:";
//        cin>>n;
//        cin>>m;
//    } while(n<1 || m<1);
//
//
//    a = new int*[n];//выделение памяти для n строк
//    for(int i=0; i<n; i++){
//        a[i]= new int[m];// для каждой строки выделяем нужное количество элементов
//    }
//    
//    for(int i=0 ;i<n; i++){
//        for(int j=0 ;j<m; j++){
//            a[i][j]=rand()%200;
//            cout<<a[i][j]<<"\t";
//        
//    }
//        cout<<endl;
//    }
//    
//    
//    //важно  правильно очистить память
//    
//    for(int i=0; i<n;i++){
//        delete a[i];
//    }
//    delete a;
//}
