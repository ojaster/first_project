////
////  Critter.cpp
////  FIrst_Project
////
////  Created by Данил on 06/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Critter{
//private:
//    int m_Hunger;
//    int m_boredom;
//    void passTime(int time=1);
//    int getMood();
//public:
//    Critter(int hunger=0, int boredom=0);
//    void talk();
//    void eat(int food=4);
//    void play(int fun=4);
//};
//
//inline int Critter::getMood(){
//    return m_Hunger + m_boredom;
//}
//void Critter::passTime(int time){
//    m_Hunger+=time;
//    m_boredom+=time;
//}
//void Critter::talk(){
//    int mood = getMood();
//    if(mood>15){
//        cout<<"mad"<<endl;
//    }else if(mood > 10){
//        cout<<"frusttrated"<<endl;
//    }else if(mood > 5){
//        cout<<"ok"<<endl;
//    }else{
//        cout<<"happy"<<endl;
//    }
//    passTime();
//}
//
//void Critter::eat(int food){
//    cout<<"eat"<<endl;
//    m_Hunger-=food;
//    if(m_Hunger<0){
//        m_Hunger=0;
//    }
//    passTime();
//}
//void Critter::play(int play){
//    m_boredom-=play;
//    if(m_boredom<0){
//        m_boredom=0;
//    }
//    passTime();
//}
//
//Critter::Critter(int hunger, int boredom):m_Hunger(hunger),m_boredom(boredom){}
//
//int main(){
//    Critter crit;
//    crit.talk();
//    int choice;
//    do{
//        cout<<"0 = Quit"<<endl;
//        cout<<"1 = listen to your critter"<<endl;
//        cout<<"2 = feed your critter"<<endl;
//        cout<<"3 = play with your critter"<<endl;
//        cout<<"Choice:";
//        cin>>choice;
//        switch(choice){
//            case 0:
//                cout<<"good bye"<<endl;
//                break;
//            case 1:
//                crit.talk();
//                break;
//            case 2:
//                crit.eat();
//                break;
//            case 3:
//                crit.play();
//                break;
//            default:
//                cout<<"your choice is not valid"<<endl;
//
//        }
//    }while (choice!=0);
//}
