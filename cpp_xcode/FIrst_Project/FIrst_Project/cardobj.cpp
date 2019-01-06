////
////  cardobj.cpp
////  FIrst_Project
////
////  Created by Данил on 04.11.18.
////  Copyright © 2018 Daniil. All rights reserved.
////
//
//#include <iostream>
//using namespace std;
//enum Suit {clubs, diamonds, hearts, spades};
//
//const int jack = 11;
//const int queen = 12;
//const int king = 13;
//const int ace = 14;
//
//class Card{
//private:
//    int number;//достоинство карты
//    Suit suit; //масть
//public:
//    Card (){} // конструктор без аргументов
//    Card(int n, Suit s){//конструктор с двумя аргументами
//        number = n;
//        suit = s;
//    }
//    void display();//вывод карты на экран
//    bool isEqual(Card); //результат сравнения двух карт
//};
//
//void Card::display(){
//    if(number>=2 && number<=10){
//        cout<<number<<endl;
//    }else{
//        switch(number){ //14
//            case jack:
//                cout<<"валет"<<endl;
//                break;
//            case queen:
//                cout<<"дама"<<endl;
//                break;
//            case king:
//                cout<<"король"<<endl;
//                break;
//            case ace:
//                cout<<"туз"<<endl;
//                break;
//        }
//    }
//    switch(suit){
//        case clubs:
//            cout<<"треф"<<endl;
//            break;
//        case diamonds:
//            cout<<"бубен"<<endl;
//            break;
//        case hearts:
//            cout<<"червей"<<endl;
//            break;
//        case spades:
//            cout<<"пик"<<endl;
//            break;
//    }
//}
//bool Card::isEqual(Card c2){
//    return (number==c2.number && suit == c2.suit) ? true : false; //тернарный оператор
//}
//
//int main(){
//    Card temp,chosen,prize;//используют конструктор без аргументов
//    int position;
//    Card card1(7,clubs);
//    cout<<"card1:"<<endl;
//    card1.display();
//    
//    Card card2(jack,hearts);
//     cout<<"card2:"<<endl;
//    card2.display();
//    
//    Card card3(ace,spades);
//    cout<<"card3:"<<endl;
//    card3.display();
//    //Нужно будет угадать prize
//    prize = card3;
//   cout<<"Меняем местами карты 1 и 3...";
//    temp = card3;
//    card3 = card1;
//    card1 = temp;
//    cout<<"Меняем местами карты 2 и 3...";
//    temp = card3;
//    card3 = card2;
//    card2 = temp;
//    cout<<"Меняем местами карты 1 и 2...";
//    temp = card2;
//    card2 = card1;
//    card1 = temp;
//    cout<<"На какой позиции (1,2,3) теперь...";
//    prize.display(); //угадымаевая карта
//    cout<<"?"<<endl;
//    cin>>position;//ввод позиции игроком
//    switch(position){
//        case 1:
//            chosen = card1;
//            break;
//        case 2:
//            chosen = card2;
//            break;
//        case 3:
//            chosen = card3;
//            break;
//    }
//    
//    if(chosen.isEqual(prize)){
//        cout<<"Правильно! вы выиграли!"<<endl;
//    }else{
//        cout<<"Неверно! Вы проиграли!"<<endl;
//    }
//    cout<<"Вы выбрали "<<endl;
//    chosen.display();
//    cout<<endl;
//}


