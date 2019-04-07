////
////  Person.cpp
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
//class Person{
//protected:
//    char gender;
//    int age;
//public:
//    Person(int a, int g){
//        age=a;
//        gender =g;
//    }
//    virtual void personInfo()const = 0;//чистая виртуальная функция - делает класс абстрактным
//};
//
//class Student:public Person{
//protected:
//    int course;
//    char group;
//    int journalNUmber;
//public:
//    Student(int c=1, char gr='3', int jN=1, int a=1 , char  g='m');
//    virtual void personInfo()const;
//};
//
//Student::Student(int c, char gr, int jN, int a , char g):Person(a,g){
//    course = c;
//    group = gr;
//    journalNUmber = jN;
//}
//
//void Student::personInfo()const{
//    cout<<"age: "<<age<<endl;
//    cout<<"gender: "<<gender<<endl;
//    cout<<"course: "<<course<<endl;
//    cout<<"group: "<<group<<endl;
//    cout<<"journal number: "<<journalNUmber<<endl;
//}
//
//int main(){
//    Person * person = new Student();
//    person->personInfo();
//}
