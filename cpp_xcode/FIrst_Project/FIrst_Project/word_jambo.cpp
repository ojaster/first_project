//
//  jambo.cpp
//  FIrst_Project
//
//  Created by Данил on 05/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
//
//#include <cstdio>
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//#include <string>
//using namespace std;
//
//
//
//int main() {
//    int points=0;
//    enum fields {WORD, HINT , NUM_FIELDS};
//    const int NUM_WORDS = 5;
//    const string WORDS[NUM_WORDS][NUM_FIELDS] = {
//        {"wall", " it's out side and inside your house"},
//        {"glassess"," These might help you to see the answer"},
//        {"improve", " make better"},
//        {"persistent"," teble leg for planes"},
//        {"jumble"," The word game"}
//    };
//    srand((unsigned int)time(NULL));
//    int choice  = (rand()%NUM_WORDS);
//    string theWord = WORDS[choice][WORD]; // слово которое нужно угадать
//    string theHint  = WORDS[choice][HINT];//подсказка для слова
//
//    string jumble = theWord; //перемешенный вариант слова
//
//    unsigned long length = jumble.size();
//    for(int i=0; i<length; i++){
//        int index1 = (rand()%length);
//        int index2 = (rand()%length);
//        char temp =  jumble[index1];
//        jumble[index1] = jumble[index2];
//        jumble[index2] = temp;
//    }
//    cout<<"Welcome to game: Jumble"<<endl;
//    cout<<"Unscramble the letters to make a word"<<endl;
//    cout<<"Enter 'hint' for a hint"<<endl;
//    cout<<"Enter 'quit' to quit the game"<<endl;
//    cout<<"The jumble is:"<<jumble<<endl;
//    string guess;
//    cout<<"\n\n your quess:";
//    cin>>guess;
//    for(int i=0; i<theWord.size(); i++){
//        points++;
//    }
//    while((guess!= theWord) && (guess!="quit")) {
//        if(guess == "hint"){ // guess == hint
//            cout<<"Hint is:"<<theHint<<endl;
//            points--;
//        }else{
//            cout<<"it's inccorect answer"<<endl; // извините это неверно
//        }
//        cout<<"\n\n your quess:";
//        cin>>guess;
//
//    }
//    if(guess == theWord){
//        cout<<"You Win"<<endl;
//    }
//    cout<<"your points:"<<points<<endl;
//// [0][1][1]
//// [1][1][1]
//
//
//// [1][1][1] unsigned
//}
