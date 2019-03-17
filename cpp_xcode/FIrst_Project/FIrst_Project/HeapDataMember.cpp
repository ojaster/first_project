////
////  HeapDataMember.cpp
////  FIrst_Project
////
////  Created by Данил on 15/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Critter{
//private:
//    string * m_pName;
//    int m_Age;
//public:
//    Critter(const string & name = " ", int age = 0);
//    ~Critter();//прототип деструктора
//    Critter(const Critter & c);//прототип конструктора копировая
//    Critter & operator=(const Critter&c);
//    void greet() const;
//};
//
//Critter::Critter(const string & name , int age ){
//    cout<<"constructor is called"<<endl;
//    //1) сначала выделяется память для объкта типа string
//    //2) затем ей присваивается значение переменной name
//    //3)а затем указателю m_pName присваивается  адрес этого фрагмента памяти
//    m_pName = new string(name);//выделяем память в куче
//    m_Age = age;
//}
//Critter & Critter::operator=(const Critter & c){
//    cout<<"Перегурзка оператора = "<<endl;
//    if(this != &c){//не присваивается ли объект сам себе?
//        delete m_pName;
//        m_pName = new string(*(c.m_pName));
//        m_Age = c.m_Age;
//    }
//    return *this;//ссылка на объект класса critter
//}
//Critter::~Critter(){
//    cout<<"destructor is called"<<endl;
//    delete m_pName;
//}
//void Critter::greet() const{
//    cout<<"name:"<<*m_pName<<endl;
//    cout<<"age:"<<m_Age<<endl;
//    cout<<"name:"<<m_pName<<endl;
//    cout<<"age:"<<&m_Age<<endl;
//}
//Critter::Critter(const Critter & c){
//    cout<<"copy constructer called"<<endl;
//    m_pName = new string(*(c.m_pName));
//    //m_pName = c.m_pName;
//    m_Age = c.m_Age;
//}
//void testDestructor();
//void testCopyConstructor(Critter aCopy);
//void testAssignmentOperation();
//
//int main(){
//    testDestructor();
//    cout<<endl;
//
//
//    Critter crit("Pppp", 5);
//    crit.greet();
//    cout<<endl;
//
//
//    testCopyConstructor(crit);
//    crit.greet();
//
//
//    testAssignmentOperation();
//
//}
//void testDestructor(){
//    Critter toDestroy("igor" , 23);
//    toDestroy.greet();
//}
//void testCopyConstructor(Critter aCopy){
//    aCopy.greet();
//}
//void testAssignmentOperation(){
//    Critter crit1("slavik", 34), crit2("crit2" , 42);
//    crit1 = crit2;
//    crit1.greet();
//    crit2.greet();
//    cout<<endl;
//    Critter crit3("crit3", 14);
//    crit3 = crit3;
//}
