////
////  polymorphicBadGuy.cpp
////  FIrst_Project
////
////  Created by Данил on 05/04/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Enemy{
//protected:
//    int *m_pDamage;
//public:
//    Enemy(int damage = 10);
//    virtual ~Enemy();
//    void virtual attack()const;
//
//};
//Enemy::Enemy(int damage){
//    m_pDamage  = new int(damage);
//}
//Enemy::~Enemy(){
//    delete m_pDamage;
//    cout<<"in Enemy destructor, deleting Enemy damage"<<endl;
//    m_pDamage = 0;
//}
//void Enemy::attack()const{
//    cout<<*m_pDamage<<endl;
//}
//class Boss:public Enemy{
//protected:
//    int *m_pMultipiler;
//public:
//    Boss(int multipiler = 3);
//    virtual ~Boss();
//    void virtual attack()const;
//};
//Boss::Boss(int multipiler){
//    m_pMultipiler = new int(multipiler);
//}
//Boss::~Boss(){
//    delete m_pMultipiler;
//    cout<<"in Boss destructor, deleting Boss multipiler"<<endl;
//    m_pMultipiler = 0;
//}
//void Boss::attack() const{
//    cout<<"boss attacks"<<(*m_pDamage) * (*m_pMultipiler)<<endl;
//}
//int main(){
//    Enemy * enemy = new Boss();
//    enemy->attack();
//    delete enemy;
//}
