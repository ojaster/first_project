////
////  PayCar.cpp
////  FIrst_Project
////
////  Created by Данил on 14.10.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//class TollBooth{
//private:
//    double pay;
//    int carNumber;
//public:
//    //конструктор - это метод который вызывается автоматически при создании объекта
//    TollBooth(): pay(0.0), carNumber(0){
//        
//    }
//    void payingCar(){
//        carNumber++;
//        pay+=0.5;
//    }
//    void noPayCar(){
//        carNumber++;
//    }
//    void showCar() const{
//        cout<<carNumber<<endl;
//        cout<<pay<<endl;
//    }
//};
//int main(){
//    TollBooth s1;
//    char sym = 'y';
//    do{
//        cout<<"Yes/No:";
//        cin>>sym;
//        if(sym=='y'){
//            s1.payingCar();
//        }else{
//            s1.noPayCar();
//        }
//    }while(sym!='q');
//    
//    s1.showCar();
//}
