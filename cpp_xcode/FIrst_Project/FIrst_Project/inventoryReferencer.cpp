////
////  inventoryReferencer.cpp
////  FIrst_Project
////
////  Created by Данил on 09/02/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//using namespace std;
//
//const string & refToElement(vector<string> & inventory, int i);
//
//int main(){
//    vector<string>inventory;
//    inventory.push_back("sword");
//    inventory.push_back("armour");
//    inventory.push_back("shield");
//    //отображается строка на котороую указывает возвращаемая ссылка
//    cout<<"this is just a sending index for resive"<<endl;
//    cout<<refToElement(inventory,0)<<endl;
//    //присваивает одну ссылку другой - малозатратная операция присваивания
//    cout<<"assigning the returned reference to another reference"<<endl;
//    string & rStr = refToElement(inventory,1);
//    cout<<"Sending the new reference to cout"<<endl;
//    cout<<rStr<<endl;
//    
//    //копирует строковый объект - затратная операция присваивания
//    cout<<"assigning the returned reference to string object"<<endl;
//    string str = refToElement(inventory,2);
//    cout<<"Sending the new reference to cout"<<endl;
//    cout<<str<<endl;
//    
//    //измнение строкового объекта посредством возвращенной ссылки
//    cout<<"Altering an object through a returned reference"<<endl;
//    rStr = "hello world!";
//    
//    cout<<"Sending the altering object to cout"<<endl;
//    cout<<inventory[1]<<endl;
//}
//
////возвращает ссылку на строку
//const string & refToElement(vector<string> & inventory, int i){
//    return inventory[i];
//}
