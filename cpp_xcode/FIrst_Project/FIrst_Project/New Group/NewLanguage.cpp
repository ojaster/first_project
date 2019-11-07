////
////  NewLanguage.cpp
////  FIrst_Project
////
////  Created by Данил on 13/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//static string * writtenCode;
//static int memmoryCounter = 50;
//
//void getMemmory(){
//    writtenCode = new string[memmoryCounter];
//    memmoryCounter = memmoryCounter * 2;
//}
//void freeMemmory(){
//    string * pointer;
//    pointer = writtenCode;
//    delete [] writtenCode;
//    getMemmory();
//    writtenCode = pointer;
//    delete pointer;
//}
//bool infinityReader(){
//    int i=1;
//    getMemmory();
//    string temp;
//    while(temp != "play"){
//        cout<<i;
//        getline(cin, writtenCode[i]);
//        i++;
//        temp = writtenCode[i];
//        cout<<writtenCode[i]<<endl;
//        if(temp == "play"){
//            cout<<"?"<<endl;
//        }
//        if(i >= memmoryCounter){
//            freeMemmory();
//        }
//    }
//    delete [] writtenCode;
//    return true;
//}
//int main(){
//    cout<<infinityReader()<<endl;
//}
