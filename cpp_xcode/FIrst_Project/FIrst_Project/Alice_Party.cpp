////
////  Alice_Party.cpp
////  FIrst_Project
////
////  Created by Данил on 18.09.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//#include <vector>
//#include <map>
//using namespace std;
//void addFriends(string nameOfPerson, vector<string> listtOffriends);
//void isFriend(string nameOfPerson1, string nameOfPerson2);
//void printFriend(string nameOfPerson);
//
//map<string,vector<string>>friends;
//
//
//int main(){
//    vector<string> tmp;//друзья Васи
//    tmp.push_back("Катя");
//    tmp.push_back("Даша");
//    tmp.push_back("Петя");
//    
//    addFriends("Вася", tmp);
//    tmp.clear();
//    
//    tmp.push_back("Наташа");
//    addFriends("Роберт", tmp);
//    
//    printFriend("Вася");
//    
//    isFriend("Катя","Даша");
//    
//    cout<<"end ";
//}
//void printFriend(string nameOfPerson){
//    vector<string> tmp(10);
//    
//    copy(friends[nameOfPerson].begin(), friends[nameOfPerson].end(), tmp.begin());
//    cout<<tmp.size()<<endl;
//    for(int i=0; i<tmp.size(); i++){
//        cout<<tmp[i]<<endl;
//    }
//}
//
////key - value adressBook={ elena - [445-66], igor - [455-666]}
//// adressBook["igor"]
////index - value
//// "hello"+="5"
//void addFriends(string nameOfPerson, vector<string> listtOffriends){
//    //pair<string,vector<string>>(nameOfPerson,listtOffriends); // Вася - [Катя, Даша, Петя]
//                                                                // Роберт - [Наташа]
//    friends[nameOfPerson] = listtOffriends; //arr[i] = 6
//}
//
//void isFriend(string nameOfPerson, string nameOfPerson2){
//    vector<string> tmp(10);
//    int find = 0;
//    copy(friends[nameOfPerson].begin(), friends[nameOfPerson].end(), tmp.begin());
//    cout<<tmp.size()<<endl;
//    for(int i=0; i<tmp.size(); i++){
//        if(tmp[i] == nameOfPerson2){
//            find = 1;
//            break;
//        }
//    }
//    if(find == 1){
//        cout<<"True"<<endl;
//    }else{
//        cout<<"False"<<endl;
//    }
//}
