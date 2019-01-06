//
//  A.cpp
//  FIrst_Project
//
//  Created by Данил on 17.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//

//#include <iostream>
//using namespace std;
//class A{
//private:
//    static int totalAmount; // для всех объектов - общее поле ( то есть будет одинаковым для всех экземпляров данного класса)
//    int orderNumber;
//public:
//    
//    A(int n){
//        orderNumber = n;
//        totalAmount++;
//    }
//    int getOrderNumber(){
//        return orderNumber;
//    }
//    int getTotalAmount(){
//        return totalAmount;
//    }
//};
//
//int A::totalAmount = 0;
//
//int main(){
//    A obj(0);
//    cout<<"index obj="<<obj.getOrderNumber()<<endl;
//    cout<<"total obj="<<obj.getTotalAmount()<<endl;
//    
//    //------------
//    A obj1(obj.getTotalAmount());
//    cout<<"index obj1="<<obj1.getOrderNumber()<<endl;
//    cout<<"total obj1="<<obj1.getTotalAmount()<<endl;
//    //---------
//    cout<<"index obj="<<obj.getOrderNumber()<<endl;
//    cout<<"total obj="<<obj.getTotalAmount()<<endl;
//    //--------
//    A obj2(obj.getTotalAmount());
//    cout<<"index obj2="<<obj2.getOrderNumber()<<endl;
//    cout<<"total obj2="<<obj2.getTotalAmount()<<endl;
//}
