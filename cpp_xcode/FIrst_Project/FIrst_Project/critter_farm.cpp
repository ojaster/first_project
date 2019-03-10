////
////  critter_farm.cpp
////  FIrst_Project
////
////  Created by Данил on 07/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//class Critter{
//private:
//    string m_name;
//public:
//    Critter(const string & name = "");
//    string getName()const;
//};
//Critter::Critter(const string & name):m_name(name){}
//
//string Critter::getName()const{
//    return m_name;
//}
//
//class Farm{
//private:
//    vector<Critter> m_Critters;//массив существ
//public:
//    Farm(int spaces=1);
//    void add(const Critter & aCritter);
//    void rollCall() const;
//};
//
//Farm::Farm(int spaces){
//    m_Critters.reserve(spaces);//выделяется память для  spaces объектов
//}
//void Farm::add(const Critter & aCritter){ // string & a
//    m_Critters.push_back(aCritter); // (!!!!!)
//}
//void Farm::rollCall() const{
//    for(vector<Critter> :: const_iterator iter = m_Critters.begin(); iter!= m_Critters.end(); iter++){
//        cout<<iter->getName()<<" here"<<endl;
//    }
//}
//
//int main(){
//    Farm farm(3);
//    farm.add(Critter("one"));
//    farm.add(Critter("two"));
//    farm.add(Critter("three"));
//    farm.rollCall();
//    
//}
