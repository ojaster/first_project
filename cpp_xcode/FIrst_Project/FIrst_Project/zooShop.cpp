////
////  zooShop.cpp
////  FIrst_Project
////
////  Created by Данил on 08/03/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//#include <string>
//using namespace std;
//class Animal{
//private:
//    string aname;
//    string apol;
//    int aprice;
//    string atype;
//public:
//    Animal(string type,string name, string pol, int zena);
//    void print() const;
//    void setValues(string & name, int & price, string &pol, string & type);
//    string toString()const;
//};
//Animal::Animal(string type,string name, string pol, int zena){
//    atype = type;
//    aname = name;
//    apol = pol;
//    aprice = zena;
//    //print();
//}
//void Animal::print() const {
//     cout<<"animal type is:"<<atype<<endl;
//    cout<<"animal name is:"<<aname<<endl;
//    cout<<"animal pol is:"<<apol<<endl;
//    cout<<"animal price is:"<<aprice<<endl;
//}
//
//string Animal::toString()const{
//    return "["+atype+","+aname+","+apol+","+to_string(aprice)+"]";
//}
//
//void  Animal::setValues(string & name, int & price, string &pol, string & type){
//    aname = name;
//    apol = pol;
//    price = price;
//    atype = type;
//}
//
//class ZooShop{
//private:
//    vector<Animal> animals;
//public:
//    void show() const;
//    void add(const Animal & animal);
//};
//void ZooShop::add(const Animal & animal){
//    animals.push_back(animal);
//}
//void ZooShop::show() const{
//    for(vector<Animal> :: const_iterator iter = animals.begin(); iter!=animals.end(); iter++){
//        cout<<iter->toString()<<endl;
//    }
//}
//
//
//int main(){
//    ZooShop zooShop;
//    zooShop.add(Animal("wolf" , "cat" , "w" , 3000));
//    zooShop.add(Animal("dog" , "bobik" , "m" , 980));
//    zooShop.show();
//
//}
