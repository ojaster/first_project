//
//  fraction.cpp
//  FIrst_Project
//
//  Created by Данил on 17.11.18.
//  Copyright © 2018 Daniil. All rights reserved.
//
//
//#include "fraction1.hpp" 
//
//int Fraction:: getNOD(){
//    int a1 = a;
//    int b1 = b;
//    while(a1!=0 and b1!=0){
//    if(a1 > b1){
//        a1 = a1 % b1;
//    }else{
//        b1 = b1 % a1;
//    }
//    }
//    return a1+b1;
//}
//void Fraction:: reduce(){
//    int nod = getNOD();
//    cout<<nod<<endl;
//    a/=nod;
//    b/=nod;
//}
//Fraction::Fraction(int a, int b){
//    this->a = a; //this- явный доступ к объекту для которого вызвали конструктор  a=a
//    this->b = b;
//}
//Fraction Fraction:: add (Fraction d2) {
//    int resultB = d2.b*b;//результирующий знаменатель
//    int resultA = d2.b*a+b*d2.a;
//    return Fraction(resultA,resultB);//возвращаем сам объект (*this - псевдоним самого объекта)
//}
//Fraction Fraction:: div(Fraction d2){
//    int resultA = a*d2.b;
//    int resultB = b*d2.a;
//    return Fraction(resultA,resultB);
//}
//Fraction Fraction::sub(Fraction d2){
//    int resultB = d2.b*b;//результирующий знаменатель
//    int resultA = d2.b*a-b*d2.a;
//    a = resultA;
//    b = resultB;
//    return Fraction(a,b);//возвращаем сам объект (*this - псевдоним самого объекта)
//}
//Fraction Fraction:: mult (Fraction d2) {
//    a = a*d2.a;
//    b = b*d2.b;
//    return Fraction(a,b);//возвращаем сам объект (*this - псевдоним самого объекта)
//}
//
//void Fraction::show(){
//    cout<<a<<"/"<<b<<endl;
//}
//
//
//int main(){
//    Fraction one(1,2);//конструкторы вызываются в момент создания
//    Fraction two(3,2);
//    Fraction three  = one.add(two);
//    three.reduce();
//    three.show();
//    Fraction four = three.mult(one);
//    four.show();
//    Fraction t1(1,2);
//    Fraction t2(1,2);
//    Fraction res = t1.sub(t2);
//    res.show();
//    Fraction d1(2,5);
//    Fraction d2(4,7);
//    Fraction resu = d1.div(d2);
//    resu.show();
   
//}
