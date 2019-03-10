////
////  pointing.cpp
////  FIrst_Project
////
////  Created by Данил on 17/02/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
////#define NULL 0
////const int NULL = 0;
//int main(){
//    int score=1000;
//    int *pAPointer; //объявили указатель
//    //указатель в никуда
//    int *pScore=0;//объявили и проинициализировали указатель "указатель НА int"
//    
//    pScore=&score;//присвоили указателю pScore адрес переменной score
//    
//    
//    cout<<"присвоили указателю pScore адрес переменной score"<<endl;
//    cout<<"&score is"<<&score<<endl;//адрес переменной score
//    cout<<"pScore is"<<pScore<<endl;//адрес сохраненный в указателе
//    
//    cout<<"score is"<<score<<endl;
//    cout<<"*pScore is"<<*pScore<<endl;// получили значение на которое направлен указатель
//    
//    cout<<"Добавляем 500 очков к score"<<endl;
//    score +=500;
//    cout<<"score is "<<score<<endl;
//    cout<<"*pScore is "<<*pScore<<endl;//значение на которое направлен указатель
//    
//    cout<<"Добавляем 500 очков к pScore"<<endl;
//    *pScore+=500;
//    cout<<"score is "<<score<<endl;
//    cout<<"*pScore is "<<*pScore<<endl;//значение на которое направлен указатель
//    
//    cout<<endl;
//    cout<<"Свяжем &newScore с pScore"<<endl;
//    int newScore = 5000;
//    pScore = &newScore;//в указатеь записываем адрес перменной newScore
//    cout<<"&newScore is"<<&newScore<<endl;
//    cout<<"pScore is"<<pScore<<endl;
//    cout<<"newScore is"<<newScore<<endl;
//    cout<<"*pScore is"<<*pScore<<endl;//выводим значение
//    
//    cout<<endl;
//    string str = "SCORE";
//    string * pStr = &str; //указатель на строковый объект
//    //*pStr ="new score";
//    cout<<"str is "<<str<<endl;
//    cout<<"*pStr is "<<*pStr<<endl;
//    cout<<"(*pStr).size() is  "<<(*pStr).size()<<endl;
//    cout<<"pStr->size() is  "<<pStr->size()<<endl;
//    
//    
//    int score2 =  100;
//    int score3 = 200;
//    int * const pScore1 = &score2;//константный указатель - [адрес] сохраненный в константном указателе не может измениться - он посточнный
//    //pScore1 = &score3;
//    score2+=100;
//    *pScore1+=100;
//    
//    const int * pNumber;//указатель на константу
//    int lives = 3;
//    pNumber = &lives;
//    //*pNumber-=1;//недопустимо - указатель на константу не может применяться для измения [значения] на которое указывает
//    pNumber = &score2;
//    
//    //константный указатель на константу
//    const int bonus = 400;
//    const int * const pBonus = &bonus;
//    *pBonus = score2;
//    
//}
//
