////
////  anagrammm.cpp
////  FIrst_Project
////
////  Created by Данил on 20/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "Tstack.hpp"
//using namespace std;
//int priority(char a){
//    return a == 'a'? 10:a == 'b'? 9:a == 'c'? 8:a == 'd'? 7:a == 'e'? 6:a == 'f'? 5:a == 'g'? 4:0;
//}
//char retAnagramm(TStack<char> anagramm);
//int main(){
//    TStack<char> anagramm(20);
//    char massiveOfmassive[] = {'t','a','b','n','a','t','t','a','n','t','t','a','a','e','t','e','t','a','t','a','e'};
//    for(int i=0; i<21; i++){
//        anagramm.push(massiveOfmassive[i]);
//    }
//    cout<<retAnagramm(anagramm)<<endl;
//    //find annagram 1
//    // find biggest anagaramm 0
//     
//}
//char retAnagramm(TStack<char> anagramm){
//    int h = 0;
//    char a[3];
//    char b[3];
//    char *ret = nullptr;
//    TStack<char> timeAnnagram(15);
//    
//    for(int i=0; i<3; i++){
//        a[i] = anagramm.pop();
//    }
//    while(true){
//        h = 0;
//        for(int j=0; j<3; j++){
//            b[j] = anagramm.pop();
//        }
//        for(int i=0; i<3; i++){
//            for(int j=0; j<3; j++){
//                if(priority(a[i]) == priority(b[j])){
//                    h++;
//                    break;
//                }
//            }
//        }
//        if(h == 3){
//            for(int i=0; i<3; i++){
//                timeAnnagram.push(a[i]);
//            }
//        }
//        for(int i=0; i<3; i++){
//            a[i] = b[i];
//        }
//        if(anagramm.isEmpty()){
//            break;
//        }
//    }
//    ret = new char[timeAnnagram.size()];
//    for(int i=0; i<timeAnnagram.size(); i++){
//        ret[i] = timeAnnagram.peek(i);
//    }
//    for(int i=0; i<timeAnnagram.size(); i++){
//        timeAnnagram.pop();
//    }
//    char *ret2 = ret;
//    delete [] ret;
//    return *ret2;
//}
//
