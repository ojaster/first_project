////
////  joke22.cpp
////  FIrst_Project
////
////  Created by Данил on 09.09.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//
//bool checkJoke(string joke);
//void show();
//
////глобальные переменные
//string vector[100];
//int pos;
//
//int main(){
//    string joke;
//    
//    do{
//        getline(cin,joke);
//        if(checkJoke(joke)){  //if(true)
//            vector[pos++] = joke; // ['шутка 1']  vector[0]='шутка 1', vector[1] ='шутка 2'
//        }
//    }while(joke!="");
//    
//    show();
//    
//}
////45
// // [44, 45]
//
//bool checkJoke(string joke){
//    for(int i=0; i<pos; i++){
//        if(vector[i]==joke){//если шутка уже есть, то не нужно ее опять добавлять в массив
//            return false;
//        }
//    }
//    return true;//если же такой шутки еще нет
//}
//
//void show(){
//    for(int i=0; i<pos; i++){
//        cout<<vector[i]<<endl;
//    }
//}
