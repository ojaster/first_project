////
////  stud.cpp
////  FIrst_Project
////
////  Created by Данил on 29/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class CPerson{
//public:
//    string ot;
//    string name;
//    string fam;
//    CPerson(string o, string n, string f);
//    CPerson(){}
//    void virtual showData()const;
//};
//CPerson::CPerson(string o, string n, string f){
//    ot = o;
//    name = n;
//    fam = f;
//}
//void CPerson::showData()const{
//    cout<<"ot:"<<ot<<endl;
//    cout<<"name:"<<name<<endl;
//    cout<<"famil:"<<fam<<endl;
//}
//class Student:public CPerson{
//public:
//    int middleNumber;
//    Student(string n, string o, string f, int m):CPerson(n,o,f){
//        middleNumber = m;
//    }
//    void showData()const;
//};
//void Student::showData()const{
//    cout<<"middle number:"<<middleNumber<<endl;
//    CPerson::showData();
//}
//class CProfessor:public CPerson{
//public:
//    int numberOfPublication;
//    string stat;
//    CProfessor(int nop, string s, string n, string o, string f);
//    void showData()const;
//};
//CProfessor::CProfessor(int nop, string s, string n, string o, string f):CPerson(n,o,f){
//    numberOfPublication = nop;
//    stat = s;
//}
//void CProfessor::showData()const{
//    CPerson::showData();
//    cout<<"number of publications:"<<numberOfPublication<<endl;
//    cout<<"stat:"<<stat<<endl;
//}
//int main(){
//    CPerson ** persons = new CPerson *[2]();//указатель на указатель -[-(), (), ()]
//    persons[0] = new  Student("ivan", "ivanovich", "ivanov", 5);
//    persons[1] = new  CProfessor(10 , "professor","ivan", "ivanovich", "ivanov");
//    for(int i= 0; i<2; i++){
//        persons[i]->showData();
//    }
//    for(int i=0; i<2; i++){
//        delete persons[i];
//    }
//    
//    delete [] persons;
//}
//
