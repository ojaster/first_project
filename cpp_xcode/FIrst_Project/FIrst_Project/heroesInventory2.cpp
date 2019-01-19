//
//  heroesInventory2.cpp
//  FIrst_Project
//
//  Created by Данил on 06/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//int main(){
//    vector<string> inventory;
//
//    inventory.push_back("sword");//добавляет элемент в конец вектора
//    inventory.push_back("armor");
//    inventory.push_back("shield");
//
//    //имея итератор можно получить доступ к значению элемента
//    vector<string>::iterator myIterator;//итератор для вектора
//    //Константный оператор представляет доступ к элементу в режиме "только для чтения"
//    vector<string>::const_iterator iter;
//
//    cout<<"Your items:"<<endl;
//    //Перебор содержимого вектора
//    for(iter = inventory.begin(); iter != inventory.end(); iter++){//begin() - возвращает итератор, указывающий на первый элемент контейнера
//        cout<<*iter<<endl; // ->a  *- отображаем значение того элемента, на который ссылается итератор
//    }
//
//    cout<<"You have "<<inventory.size()<<" items."<<endl;
//    cout<<"Your items:"<<endl;
//    for(unsigned int i=0; i<inventory.size(); i++){
//        cout<<inventory[i]<<endl;
//    }
//
//    cout<<"You trade your sword for a battle axe."<<endl;
//    myIterator = inventory.begin();
//    *myIterator = "Battle axe"; //Присовй значение Battle axe тому элементу, на который указывает итератор myterator
//
//    cout<<"Your items:"<<endl;
//    for(iter = inventory.begin(); iter != inventory.end(); iter++){
//        cout<<*iter<<endl; // ->a
//    }
//
//    cout<<"The item name "<<*myIterator<<" has "<<(*myIterator).size()<<" letters in it"<<endl;
//    cout<<"The item name "<<*myIterator<<" has "<<myIterator->size()<<" letters in it"<<endl;
//    cout<<"Your shield has been destroyed in fierce battle"<<endl;
//
//    //добавим новый артефакт к снаряжению героя
//    inventory.insert(inventory.begin(), "crossbow");//вставляем в самое начало
//    cout<<"Your items:"<<endl;
//    for(iter = inventory.begin(); iter != inventory.end(); iter++){
//        cout<<*iter<<endl; // ->a
//    }
//    //erase() - удаляем элемент из снаряжения героя
//    inventory.erase((inventory.begin() + 2));
//    
//    cout<<"Your items:"<<endl;
//    for(iter = inventory.begin(); iter != inventory.end(); iter++){
//        cout<<*iter<<endl; // ->a
//    }
//    
//    inventory.pop_back();//удаляет из вектора последний элемент и уменьшает размер вектора на единицу
//    cout<<"Your items:"<<endl;
//    for(unsigned int i=0; i<inventory.size(); i++){
//        cout<<inventory[i]<<endl;
//    }
//    cout<<"You were robbed of all your possessions by a thief"<<endl;
//    inventory.clear();
//    if(inventory.empty()){
//        cout<<"Your have nothing"<<endl;
//    }else{
//        cout<<"Your have at least one item"<<endl;
//    }
//}
