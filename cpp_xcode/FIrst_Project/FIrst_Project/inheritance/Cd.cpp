////
////  Cd.cpp
////  FIrst_Project
////
////  Created by Данил on 12/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "Cd.h"
////Cd::~Cd(){
////    delete this;
////}
//class Classic:public Cd{
//private:
//    char performers[50];
//    char label[20];
//    int selections;
//    double playtime;
//public:
//    Classic(char * s1, char * s2, int n, double x);
//    Classic(const Classic & d);
//    Classic();
//    virtual ~Classic();
//    void Report()const;
//    Classic & operator=(Classic & d);
//};
//Classic::Classic(char * s1, char * s2, int n, double x):Cd(s1,s2,n,x){}
//Classic::Classic(const Classic & d){
//    strcpy(performers, d.performers);
//    strcpy(label, d.label);
//    selections = d.selections;
//    playtime = d.playtime;
//}
//Classic::Classic(){
//    performers[0] = '\0';
//    label[0] = '\0';
//    selections = 0;
//    playtime = 0;
//}
//Classic::~Classic(){
//    delete this;
//}
//void Classic::Report()const{}
//Classic & Classic::operator=(Classic & d){
//    strcpy(performers, d.performers);
//    strcpy(label, d.label);
//    selections = d.selections;
//    playtime = d.playtime;
//    return d;
//}
//
//
//void Cd::Report()const{
//    for(int i=0; i<strlen(performers); i++){
//        cout<<performers[i]<<endl;
//    }
//    
//    for(int i=0; i<strlen(label); i++){
//        cout<<label[i]<<endl;
//    }
//    cout<<selections<<endl;
//    cout<<playtime<<endl;
//}
//
//Cd::Cd(){
//    performers[0] = '\0';
//    label[0] = '\0';
//    selections = 0;
//    playtime = 0;
//}
//
////Cd::~Cd(){
////}
//
//Cd::Cd(const Cd & d){
//    strcpy(performers, d.performers);
//    strcpy(label, d.label);
//    selections = d.selections;
//    playtime = d.playtime;
//}
//
//Cd::Cd(char * s1, char * s2, int n, double x){
//    for(int i=0; i<strlen(s1); i++){
//        performers[i] = s1[i];
//    }
//    for(int i=0; i<strlen(s2); i++){
//        label[i] = s2[i];
//    }
//    selections = n;
//    playtime = x;
//}
//
//Cd & Cd::operator=(Cd & d){
//    strcpy(performers, d.performers);
//    strcpy(label, d.label);
//    selections = d.selections;
//    playtime = d.playtime;
//    return d;
//}
//
////int main(){
////    cout<<"work"<<endl;
////}
