////
////  woeker.cpp
////  FIrst_Project
////
////  Created by Данил on 26/01/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Worker{
//private:
//    //staw
//    int staw;
//    int procent;
//    //choose
//    int choose;
//    //name and other
//    string name;
//    string famil;
//    //hour payment
//    int hourPayment=1000;
//public:
//    void input(){
//        cout<<"enter your name:";
//        cin>>name;
//        cout<<"enter famil:";
//        cin>>famil;
//        cout<<"enter staw:";
//        cin>>staw;
//        if(staw<20900){
//            procent=0;
//        }else if(staw<65700){
//            procent=5;
//        }else if(staw<104500){
//            procent=8;
//        }else if(staw>104500){
//            procent=15;
//        }
//        center();
//    }
//    void center(){
//        cout<<"1 = profile"<<endl;
//        cout<<"2 = program end"<<endl;
//        cin>>choose;
//        switch(choose){
//            case 1:
//                profile();
//        }
//    }
//    void profile(){
//        cout<<"your name is:"<<name<<endl;
//        cout<<"your famil is:"<<famil<<endl;
//        cout<<"staw is:"<<staw<<endl;
//        cout<<"hour payment:"<<hourPayment<<endl;
//        cout<<"your procent:"<<procent<<endl;
//        center();
//    }
//};
//int main(){
//    Worker worker1;
//    worker1.input();
//}
