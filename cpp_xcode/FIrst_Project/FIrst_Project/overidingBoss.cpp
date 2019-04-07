//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Enemy{
//private:
//    int m_damage;
//public:
//    
//    void virtual attack()const;
//    Enemy(int damage = 10);
//    void virtual taunt()const;
//};
//Enemy::Enemy(int damage):m_damage(damage){}
//void Enemy::attack()const{
//    cout<<"attack"<<endl;
//    cout<<m_damage<<endl;
//}
//void Enemy::taunt()const{
//    cout<<"beware me"<<endl;
//}
//
//
//class Boss:public Enemy{
//public:
//    Boss(int damage = 30);
//    void attack()const;
//    void taunt()const;
//};
//Boss::Boss(int damage):Enemy(damage){}
//void Boss::attack()const{
//    Enemy::attack();
//    cout<<"boss attack"<<endl;
//}
//void Boss::taunt()const{
//    cout<<"beware boss"<<endl;
//}
//int main(){
//    cout<<"creating an enemy"<<endl;
//    Enemy enemy;
//    enemy.attack();
//    enemy.taunt();
//    Boss boss;
//    boss.attack();
//    boss.taunt();
//}
//
