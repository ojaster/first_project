////
////  RTTI.cpp
////  FIrst_Project
////
////  Created by Данил on 03/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <iostream>
//using namespace std;
//class Grand{
//    int hold;
//public:
//    Grand(int h = 0):hold(h){}
//    virtual void speak()const{cout<<"i'm a Grand class"<<endl;}
//    virtual int value()const{return hold;}
//};
//class SuperB:public Grand{
//public:
//    SuperB(int h = 0):Grand(h){}
//    void speak()const override{cout<<"i'm a SuperB class"<<endl;}
//    virtual void say()const{cout<<"i hold the SuperB value "<<value()<<endl;}
//};
//class Magnificent:public SuperB{
//    char cH;
//public:
//    Magnificent(char c = 'A',int h = 0):SuperB(h),cH(c){}
//    void speak()const override{cout<<"i'm a Magnificent class"<<endl;}
//    void say()const override{cout<<"i hold the Magnificent value "<<value()<<endl;
//        cout<<"i hold the char "<<cH<<endl;}
//};
//
//Grand * getOne() {
//    Grand * p;
//    switch (rand() % 3) {
//        case 0:
//            p = new Grand(rand()%100);
//            break;
//        case 1:
//            p = new SuperB(rand()%100);
//            break;
//        case 2:
//            p = new Magnificent(rand()%100,'A' + rand()%26);
//            break;
//    }
//    return p;
//}
//
//int main(){
//    srand(time(NULL));//typeid(magnificent).name()
//    Grand * pG;
//    SuperB * pS;
////    for(int i = 0; i<5; i++){
////        pG = getOne();
////        pG->speak();
////        if(pS = dynamic_cast<SuperB*>(pG)){//dynamic_cast<Type*> (pt)  *pt
////            pS->say();
////        }
////        if(typeid(Magnificent) == typeid(*pG)){
////            cout<<"Yes you're really Magnificent"<<endla;
////        }
////        delete pG;
////    }
//    enum {one = 1,two};
//    switch(one){
//            case 1:
//            cout<<"yes"<<endl;
//            break;
//    }
//}
