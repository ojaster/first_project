////
////  hangMan.cpp
////  FIrst_Project
////
////  Created by Данил on 19/01/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//#include <ctime>
//#include <cctype> //содржит функции для перевода символов в верхний решистр
//using namespace std;
//class hangMan{
//
//};
//int main(){
//    //подготовка
//    const int MAX_WRONG = 8;//максимально допустимое количесто ошибок
//    vector<string> words; //подборка слов для загадывания
//    words.push_back("GUESS");
//    words.push_back("HANGMAN");
//    words.push_back("DIFICULT");
//
//    srand((unsigned int)time(NULL));
//
//    random_shuffle(words.begin(), words.end());
//    const string THE_WORD = words[0]; //слово для разгадывания
//    int wrong = 0; //количество ошибочныъ вариантов
//    string soFar(THE_WORD.size(), '-'); //часть слова, открытая на данный момент
//    string used = "";//уже отгаданные буквы
//    cout<<"welcome to hangMAn good luck!! \n ";
//    //основной цикл
//    while(wrong<MAX_WRONG && soFar!=THE_WORD  ){
//        cout<<"you have tryes:"<<(MAX_WRONG-wrong)<<endl;
//        cout<<used<<":used letters"<<endl;
//        cout<<"the word is:"<<soFar<<endl;
//        char guess;
//        cout<<"Enter your guess:";
//        cin>>guess;
//        guess=toupper(guess);//перевод в верхний регистр
//        while(used.find(guess) != string::npos){
//            cout<<"\n  you've alreday guessed"<<guess<<endl;
//            cout<<"Enter your guess:";
//            cin>>guess;
//            guess=toupper(guess);//перевод в верхний регистр
//        }
//        used+=guess;
//        if(THE_WORD.find(guess) != string::npos){ //символ нашелся в The_Word
//            cout<<"guess was right"<<endl;
//            //обновить переменную soFar, включив в нее новую угаданную букву
//            for(int i=0; i<THE_WORD.size(); i++){
//                if(THE_WORD[i]==guess){
//                    soFar[i]=guess;
//                }
//            }
//        }else{
//            cout<<"Sorry"<<guess<<"isn't in the word"<<endl;
//            wrong++;
//        }
//    }
//    //конец игры
//    if(wrong == MAX_WRONG){
//        cout<<"Game over!!"<<endl;
//    }else{
//        cout<<"you Won!!"<<endl;
//    }
//    cout<<THE_WORD<<endl;
//
//}
