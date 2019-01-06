//
//  time.cpp
//  FIrst_Project
//
//  Created by Данил on 04.11.18.
//  Copyright © 2018 Daniil. All rights reserved.

//
//#include <iostream>
//using namespace std;
//class Time {
//private:
//    int hour;
//    int minute;
//    int second;
//public:
//    Time() : hour(0),minute(0),second(0){}
//    
////    Time(int n, int y, int z){
////        hour=n;
////        minute=y;
////        second=z;
////    }
//    Time(int h, int m, int s) : hour(h),minute(m),second(s){}
//    
//    void time(int n, int y, int z){
//        n=hour;
//        y=minute;
//        z=second;
//    }
////    void display(){
////        for(int i=0; i<90; i++){
////            cout<<second++<<":";
////        if(second>60){
////            minute++;
////            cout<<minute<<":";
////            if(minute>60){
////                hour++;
////                cout<<hour<<endl;
////            }
////        }
////            
////    }
////        
////    }
//    
//    void add(Time t2);
//    
//    void show();
//};
//void Time::add(Time t2){
//    int totalHours = hour + t2.hour; //26
//    int totalMinutes = minute + t2.minute;//87
//    int totalSeconds = second + t2.second;//181
//    
//    minute = totalSeconds / 60 + totalMinutes;// 3 + 87 = 90
//    second = totalSeconds % 60; //1
//    
//    hour = (minute/60 + totalHours)%24;// 1 + 26 =  27%24 = 3
//    minute = minute % 60;//30
//    
//}
//
//void Time::show(){
//    cout<<hour<<":"<<minute<<":"<<second<<endl;
//}
//
//
//int main(){
//    Time s1(3,30, 31);
//    Time s2 (22, 10, 10);
//    s1.add(s2);
//    s1.show();
//    
//}
