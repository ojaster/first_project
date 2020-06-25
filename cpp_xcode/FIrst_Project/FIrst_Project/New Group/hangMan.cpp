////
////  hangMan.cpp
////  FIrst_Project
////
////  Created by Данил on 17/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include <ctime>
//#include <string>
//using namespace std;
//static const int NUM = 26;
//static const string wordList[NUM] = {"beetle", "danger"};
//
//int main(){
//    srand(time(NULL));
//    char play;
//    cout<<"Will you play a word game? (y/n)";
//    cin>>play;
//    play = tolower(play);
//    hangMan25:{
//    while(play == 'y') {
//        string target = wordList[rand() % NUM];
//        int length = (int) target.length();
//        string attempt(length, '-');
//        string badchars;
//        int guesses = 6;
//        cout<<"length:"<<length<<" "<<"guesses:"<<guesses<<endl;
//        while(guesses > 0 && attempt != target){
//            char letter;
//            cout<<"Guess a letter!";
//            cin>>letter;
//            if(badchars.find(letter) != string::npos || attempt.find(letter) != string::npos) {
//                cout<<"You alreday guessed that. Try again!"<<endl;
//                continue;
//            }
//            int loc = target.find(letter);
//            if(loc == string::npos){
//                cout<<"Oh, bad guess!"<<endl;
//                --guesses;
//                badchars += letter;
//            }else{
//                cout<<"Good guess!"<<endl;
//                attempt[loc] = letter;
//                //проверить, не появляется ли буква еще раз
//            
//                while((loc = target.find(letter, loc + 1)) != string::npos){
//                    attempt[loc] = letter;
//                }
//            }
//            cout<<"Your word:" <<attempt<<endl;
//            if(attempt != target){
//                if(badchars.size() > 0){
//                    cout<<"bad choises"<<endl;
//                    cout<<badchars<<endl;
//                }
//                cout<<"guesses:"<<guesses<<" left"<<endl;
//            }
//            
//        }
//         //хочет ли поиграть еще раз? check??????
//        //алгоритм игры не работает коректон
//       /* length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:0 guesses:6
//        length:6 guesses:6*/
//        //вот что выводит каждый раз, и только потом начинает игру
//        //while работает 12 паз до захода во второй while
//        
////        if(play == 'y'){
////            cin>>play;
////            play = tolower(play);
////            if(play == 'y'){
////                goto hangMan25;
////            }else{
////                cout<<"you lazy ass"<<endl;
////                break;
////            }
////            cout<<"congratulations! the game is over"<<endl;
////            break;
////        }else{
////            cout<<"you suck"<<endl;
////            break;
////        }
//        
//    }
//}
//}
