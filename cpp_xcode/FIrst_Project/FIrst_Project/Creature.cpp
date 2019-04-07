////
////  Creature.cpp
////  FIrst_Project
////
////  Created by Данил on 07/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Creature{
//protected:
//    int health;
//public:
//    Creature(int h = 100);
//    virtual void greet()const = 0;//чистая виртуальная функция
//    virtual void displayHealth()const;
//};
//Creature::Creature(int h){
//    health = h;
//}
//void Creature::displayHealth()const{
//    cout<<"health: "<<health<<endl;
//}
//class Orc:public Creature{
//public:
//    Orc(int health = 120);
//    virtual void greet()const;
//};
//Orc::Orc(int health):Creature(health){}
//
//void Orc:: greet()const{
//    cout<<"the orc grounts hello "<<endl;
//}
//int main(){
//    Creature * creature = new Orc();
//    creature->greet();
//    creature->displayHealth();
//}
