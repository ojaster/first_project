//
//  money.cpp
//  FIrst_Project
//
//  Created by Данил on 13/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Money{
//private:
//    int money;
//    int save;
//    int choose;
//    int result;
//    int const n=5;
//public:
//    void moneyInput(){
//        cout<<"enter your money:";
//        cin>>money;
//        save=money;
//        inventory();
//    }
//    void inventory() {
//        cout<<"sum money 1"<<endl;
//        cout<<"minus money 2"<<endl;
//        cout<<"half money 3"<<endl;
//        cout<<"half money if money can half 4"<<endl;
//        cout<<"double money 5"<<endl;
//        cout<<"Show money value 6"<<endl;
//        cin>>choose;
//        switch(choose){
//            case 1:
//                sumMoney();
//            case 2:
//                minusMoney();
//            case 3:
//                halfMoney();
//            case 4:
//                halfIfHAlfMoney();
//            case 5:
//                doubleMoney();
//            case 6:
//                cout<<save<<endl;
//                inventory();
//        }
//
//    }
//    void halfMoney(){
//        money=money/2.0;
//        cout<<"half:"<<money<<endl;
//        cout<<"do you want to save a result"<<endl;
//        cout<<"1 yes / 2 no"<<endl;
//        cin>>choose;
//        if(choose == 1){
//            save=money;
//            cout<<endl;
//            inventory();
//        }else{
//            cout<<endl;
//            inventory();
//        }
//    }
//    void minusMoney(){
//        int min=n;
//    money=money-min;
//    cout<<"min:"<<money<<endl;
//    cout<<"do you want to save a result"<<endl;
//    cout<<"1 yes / 2 no"<<endl;
//    cin>>choose;
//    if(choose == 1){
//        save=money;
//        cout<<endl;
//        inventory();
//    }else{
//         cout<<endl;
//         inventory();
//        }
//    }
//
//    void doubleMoney(){
//        money=money*2.0;
//        cout<<"doubLe:"<<money<<endl;
//        cout<<"do you want to save a result"<<endl;
//        cout<<"1 yes / 2 no"<<endl;
//        cin>>choose;
//        if(choose == 1){
//            save=money;
//            cout<<endl;
//            inventory();
//        }else{
//            cout<<endl;
//            inventory();
//        }
//    }
//    void halfIfHAlfMoney(){
//        if(save % 2 == 0){
//            money=money/2.0;
//        cout<<"half If Half:"<<money<<endl;
//        cout<<"do you want to save a result"<<endl;
//        cout<<"1 yes / 2 no"<<endl;
//        cin>>choose;
//        if(choose == 1){
//            save=money;
//            cout<<endl;
//            inventory();
//        }else{
//            cout<<endl;
//            inventory();
//        }
//        }else{
//            cout<<"sorry make it % 2==0"<<endl;
//            cout<<endl;
//            inventory();
//        }
//    }
//    void sumMoney(){
//        int sum=n;
//        money=money+sum;
//        cout<<"sum:"<<money<<endl;
//        cout<<"do you want to save a result"<<endl;
//        cout<<"1 yes / 2 no"<<endl;
//        cin>>choose;
//        if(choose == 1){
//            save=money;
//            cout<<endl;
//            inventory();
//        }else{
//            cout<<endl;
//            inventory();
//        }
//    }
//};
//int main(){
//    Money work;
//    work.moneyInput();
//}
