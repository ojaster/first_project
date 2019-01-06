//
//  market.cpp
//  FIrst_Project
//
//  Created by Данил on 08.09.18.
//  Copyright © 2018 Daniil. All rights reserved.
//
//
//#include <iostream>
//using namespace std;
//
//string items[100];
//double costs[100];
//int pos;
//void market();
//void addItem(string itemName, double cost);
//void printReceipt();
//int main(){
//    string item;
//    market();
//    printReceipt();
//    market();
//    printReceipt();
//}
//
//void addItem(string itemName, double cost){
//    if(pos>=0 && pos<100){
//        items[pos] = itemName;
//        costs[pos] = cost;
//        pos++;
//    }
//    
//}
//
//void printReceipt(){
//    for(int i=0; i<pos; i++){
//         cout<<"_____________"<<endl;
//    cout<<"|"<<"           "<<"|"<<endl;
//    cout<<"|"<<"          "<<" |"<<endl;
//    cout<<"|"<<items[i]<<":"<<costs[i]<<"|"<<endl;
//    cout<<"|"<<"          "<<" |"<<endl;
//    cout<<"|"<<"          "<<" |"<<endl;
//    cout<<"|"<<"          "<<" |"<<endl;
//        cout<<"|"<<"          "<<" |"<<endl;
//        cout<<"|"<<"          "<<" |"<<endl;
//          cout<<"_____________"<<endl;
//
//
//    }
//    pos = 0;
//}
//
//void market(){
//    string item;
//    double price;
//    string more="y";
//    do{
//        cout<<"item:";
//        cin>>item;
//        cout<<"price:";
//        cin>>price;
//        cout<<"more?";
//        cin>>more;
//        addItem(item, price);
//    }while(more=="yes");
//   
//
//}
