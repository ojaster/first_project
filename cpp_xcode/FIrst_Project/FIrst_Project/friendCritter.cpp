////
////  friendCritter.cpp
////  FIrst_Project
////
////  Created by Данил on 09/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Critter{
//private:
//    friend void peak(const Critter & acritter);
//    friend ostream & operator <<(ostream & os,const Critter & acritter);
//    string m_name;
//public:
//    Critter(const string & name = " ");
//};
//Critter::Critter(const string & name):m_name(name){}
//
//void peak(const Critter & acritter);
//ostream & operator <<(ostream & os,const Critter & acritter);
//
//int main(){
//    Critter crit("critter");
//    peak(crit);
//    cout<<crit<<endl;
//}
//
//
//void peak(const Critter & acritter){
//    cout<<acritter.m_name<<endl;
//}
//
//ostream & operator <<(ostream & os,const Critter & acritter){
//    os<<"Critter object = ";
//    os<<"m_name:"<<acritter.m_name;
//    return os;
//}
