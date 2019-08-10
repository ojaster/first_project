////
////  backpack.cpp
////  FIrst_Project
////
////  Created by Данил on 31/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Stuff{
//    
//    int weight;
//    
//    int cost;
//    
//public:
//    Stuff(int weigh,int cos);
//    
//    Stuff();
//    
//    void newWeightcost(int weigh,int cos);
//    
//    void operator =(int number);
//    
//    void operator =(Stuff stuff);
//    
//    int getWeightS();
//    
//    int getCostS();
//};
//
//class BackPack{
//    int maxWeight;
//    
//    int sumWeight;
//    
//    int top;
//    
//    int size;
//    
//    int maxSize;
//    
//    Stuff *massive;
//    
//public:
//    BackPack(int max,int sizeElemnts);
//    
//    BackPack(int sizeElemnts);
//    
//    explicit BackPack(Stuff stuff);
//    
//    ~BackPack();
//    
//    void pushFrontS(Stuff stuff);
//    
//    Stuff popFrontS();
//    
//    Stuff operator [](int index);
//    
//    Stuff peek();
//    
//    void deleteByIndex(int index);
//    
//    bool ifMaxWeightS();
//    
//    bool ifMaxSizeS();
//    
//    void equalS();
//    
//    void print();
//    
//    int getSize();
//    
//};
//
//
//int main(){
//    BackPack tempPack(5);
//    BackPack backPack(15,5);
//    
//    
//    int weight;
//    int cost;
//    
//    while(!tempPack.ifMaxSizeS()){
//        cout<<"input weight:";
//        cin>>weight;
//        cout<<"input cost:";
//        cin>>cost;
//        cout<<endl;
//        tempPack.pushFrontS(Stuff (weight,cost));
//    }
//    int i = 0;
//    int j = i+1;
//    while(!backPack.ifMaxSizeS()){
//        float weightPerCost = (float)tempPack.peek().getCostS() / (float)tempPack.peek().getWeightS();
//        Stuff temp = tempPack.peek();
//        tempPack.popFrontS();
//        float weightPerCost2 = (float)tempPack.peek().getCostS() / (float)tempPack.peek().getWeightS();
//        if(weightPerCost > weightPerCost2){
//            j++;
//            tempPack.pushFrontS(tempPack.popFrontS());
//            tempPack.pushFrontS(temp);
//            continue;
//        }
//            i++;
//            tempPack.pushFrontS(tempPack.popFrontS());
//            tempPack.pushFrontS(temp);
//        if(j == 5){
//            backPack.pushFrontS(tempPack.peek());
//            tempPack.print();
//            i = 0;
//            j = 1;
//        }else if(i == 5){
//            backPack.pushFrontS(tempPack.peek());
//            tempPack.print();
//            i = 0;
//            j = 1;
//        }
//    }
//
//    i = 0;
//    for(; i < 5; i++){
//        cout<<"weight:"<<backPack[i].getWeightS()<<" "<<"cost:"<<backPack[i].getCostS()<<endl;
//    }
//    
//}
//
//
//Stuff::Stuff(int weigh,int cos):weight(weigh),cost(cos){}
//
//Stuff::Stuff(){}
//
//void Stuff::newWeightcost(int weigh,int cos){
//    weight = weigh;
//    cost = cos;
//}
//
//void Stuff::operator =(int number){
//    weight = number;
//    cost = number;
//}
//
//void Stuff::operator =(Stuff stuff){
//    this->weight = stuff.weight;
//    this->cost = stuff.cost;
//}
//
//int Stuff::getWeightS(){
//    return weight;
//}
//
//int Stuff::getCostS(){
//    return cost;
//}
//
//
//
//BackPack::BackPack(int max,int sizeElements):maxWeight(max),maxSize(sizeElements),top(-1),size(NULL),sumWeight(NULL){
//    massive = new Stuff[sizeElements];
//}
//
//BackPack::BackPack(int sizeElements):maxSize(sizeElements){
//     massive = new Stuff[sizeElements];
//}
//
//BackPack::BackPack(Stuff stuff){
//    massive = new Stuff(stuff);
//}
//
//BackPack:: ~BackPack(){
//    delete [] massive;
//}
//
//void BackPack::pushFrontS(Stuff stuff){
//    if(top == maxSize){
//        return;
//    }
//    massive[top++] = stuff;
//    sumWeight += stuff.getWeightS();
//    size++;
//}
//
//Stuff BackPack::popFrontS(){
//    if(!top){
//        return massive[top];
//    }
//        sumWeight -= massive[top].getWeightS();
//        size--;
//        return massive[top--];
//}
//
//Stuff BackPack::operator [](int index){
//    return massive[index];
//}
//
//Stuff BackPack::peek(){
//    return massive[top];
//}
//
//void BackPack::deleteByIndex(int index){
//    massive[index] = 0;
//}
//
//bool BackPack::ifMaxWeightS(){
//    if(sumWeight == maxWeight){
//        return true;
//    }
//    return false;
//}
//
//bool BackPack::ifMaxSizeS(){
//    return (size == maxSize) ? true:false;
//}
//
//void BackPack::equalS(){
//    label:{
//        if(sumWeight > maxWeight){
//            this->popFrontS();
//            goto label;
//        }
//        return;
//    }
//}
//
//void BackPack::print(){
//    for(int i=0; i<maxSize; i++){
//        cout<<massive[i].getWeightS()<<endl;
//    }
//}
//
//int BackPack::getSize(){
//    return size;
//}
//
//
