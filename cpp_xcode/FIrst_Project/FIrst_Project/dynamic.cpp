////
////  dynamic.cpp
////  FIrst_Project
////
////  Created by Данил on 19.08.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//int main(){
//    int n; //размер массива
//    int *A;//указатель для выделения памяти
//    cout<<"input n:";
//    cin>>n;
//    if(n>0){
//        //система возвращает указатель на адрес памяти где можно разместить 5 чисел типа int ( 20 байт памяти)
//        A = new int[n];//выделение памяти sizeof(int) * n = 4 байта * 5 = 20 байт
//        
//        int h=1;
//        if(A==NULL){
//            cout<<"ERROR 401"<<endl;
//        }else{
//            for(int i=0; i<n;i++){
//                cout<<"elem"<<h++<<":";
//                //cin>>A[i];
//                cin>>*(A+i);
//            }
        //   delete A;// освобождаем память delete(A) - func
//        }
//       
//    }else{
//        cout<<"ERROR 404"<<endl;
//    }
//}
//
////&A[i]   == A+i (true)
