////
////  mad_lib.cpp
////  FIrst_Project
////
////  Created by Данил on 02/02/2019.
////  Copyright © 2019 Daniil. All rights reserved.
//
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//string askTxt(string prompt);
//int askNUmber(string prompt);
//void tellStory(string name, string noun, int number, string bodypart, string verb);
//int main(){
//    cout<<"Welcome to mad lib"<<endl;
//    cout<<"answer the following questions to help create a new story"<<endl;
//    string name= askTxt("please enter a name:");
//    string noun = askTxt("please enter a plural noun:");
//    int num = askNUmber("please enter a number:");
//    string bodypart = askTxt("please enter a body part:");
//    string verb = askTxt("please enter a verb:");
//    tellStory(name, noun, num, bodypart, verb);
//}
//string askTxt(string prompt){
//    char txt[256];
//    cout<<prompt<<endl;
//    cin.getline(txt, 256);//to do fix it
//    //cin>>txt;
//    string result(txt);
//    return result;
//}
//
//int askNUmber(string prompt){
//    int num;
//    cout<<prompt<<endl;
//    cin>>num;
//    return num;
//}
//void tellStory(string name, string noun, int number, string bodypart, string verb){
//    if(name.size() < 5 ) {
//        cout<<"ERROR"<<endl;
//        return; //аварийное завершение функции
//    }
//    cout<<"\nHEre's your story:\n";
//    cout<<"The famous explorer";
//    cout<<name;
//    cout<<"had nearly given up a life-long quest to find\n";
//    cout<<"The Lost City of ";
//    cout<<noun;
//    cout<<" found the explorer. \n";
//    cout<<"Surrounded by ";
//    cout<<number;
//    cout<<" "<<noun;
//    cout<<". a tear came to ";
//    cout<<name<< "'s";
//    cout<<bodypart<< ".\n";
//    cout<<"After all this time. the quest was finally over. ";
//    cout<<"And then. the ";
//    cout<<noun<<"\n";
//    cout<<"promptly devoured ";
//}
