////
////  tv.cpp
////  FIrst_Project
////
////  Created by Данил on 05/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Remote;
//
//class TV{
//    int state; // on or off
//    int volume;
//    int maxChannel;
//    int channel; //текущий канал
//    int mode;//эфирное или кабельное тв
//    int input; //TV, DVD, ...
//public:
//    friend class Remote;//Remote имеет доступ к закрытой части TV
//    enum{Off, On};
//    enum{minVal, maxVal=20};
//    enum{antenna,cable};
//    enum{tv,dvd};
//    TV(int s = Off, int mc = 125): state(s), volume(5), maxChannel(mc), channel(2), mode(cable), input(tv){}
//    
//    void onnoff() {
//        state = (state == On) ? Off : On;
//        //state ^= 1; // 0-> 1, 1->0 11 -> 00  101 -> 010 -> 010 -> 101
//    }
//    bool isOn() const {
//        return state == On;
//    }
//    bool volup();
//    bool volumeDown();
//    void channelUp();
//    void channelDown();
//    void setMode(){
//        mode = (mode == antenna) ? cable:antenna;
//    }
//    void setInput(){
//        input = (input == dvd) ? tv : dvd;
//    }
//    void settings() const;
//    void turnremote(Remote & r);
//    
//};
//bool TV::volup(){
//    if(volume < maxVal){
//        volume++;
//        return true;
//    }
//    return false;
//}
//bool TV::volumeDown(){
//    if(volume > minVal){
//        volume--;
//        return true;
//    }
//    return false;
//}
//void TV::channelUp(){
//    if(channel<maxChannel){
//        channel++;
//    }else{
//        channel = 1;
//    }
//}
//
//void TV::channelDown(){
//    if(channel > 1){
//        channel--;
//    }else{
//        channel = maxChannel;
//    }
//}
//void TV::settings() const{
//    cout<<"TV is "<<(state == Off ? "OFF" : "ON")<<endl;
//    if(state == On){
//        cout<<"Volume:"<<volume<<endl;
//        
//        cout<<"Channel:"<<channel<<endl;
//        
//        cout<<"Mode:"<<(mode == antenna? "antenna":"cable")<<endl;
//        
//        cout<<"Input:"<<(input == tv ? "tv" : "dvd")<<endl;
//    }
//    cout<<"-------"<<endl;
//}
//
//
//class Remote{
//private:
//    int mode; //управление TV или DVD
//    bool remote;
//public:
//    friend class TV;
//    Remote(int m = TV::tv) : mode(m){}
//    bool volup(TV & t) {return t.volup();}
//    bool volDown(TV & tv){return tv.volumeDown();}
//    void onff(TV & t) {t.onnoff();}
//    void channelUp(TV & tv){tv.channelUp();}
//    void channelDown(TV & tv){tv.channelDown();}
//    void setChannel(TV & t, int channel) {t.channel = channel;}
//    void setMode(TV & tv){tv.setMode();}
//    void setInput(TV & tv){tv.setInput();}
//    void turnRemote(){remote = (remote == 1) ? 0:1;}
//};
//void TV::turnremote(Remote & r){
//       r.turnRemote();
//}
//int main(){
//    TV tv42;
//    tv42.settings();
//    tv42.onnoff();
//    tv42.channelUp();
//    tv42.settings();
//    
//    Remote grey;
//    grey.setChannel(tv42, 10);
//    grey.volup(tv42);
//    grey.volup(tv42);
//    tv42.settings();
//    
//    TV tv58(TV::On);
//    tv58.setMode();
//    grey.setChannel(tv58, 28);
//    tv58.settings();
//}
