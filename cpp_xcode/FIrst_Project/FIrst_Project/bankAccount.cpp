//
//  bankAccount.cpp
//  FIrst_Project
//
//  Created by Данил on 10/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//class Account{
//private:
//    vector<int>bankAcoount;
//    vector<string>bankAccount;
//    int whatToDo=0;
//    string whattoDo;
//    int save;
//    string ssave;
//    int dollarSave=0;
//    int oneOperation;
//public:
//    void acountRegister(){
//        cout<<"Input your account name:";
//        cin>>whattoDo;
//        ssave=whattoDo;
//        cout<<"input how much money you want put:";
//        cin>>whatToDo;
//        save=whatToDo;
//        cout<<endl;
//         inventory();
//    }
//    void giveAccountForTheAnnother(){
//        whatToDo=0;
//        cout<<"for who you want give a account:";
//        cin>>whattoDo;
//        cout<<"1 = yes"<<endl;
//        cout<<"2 = no"<<endl;
//        cout<<"are you sure:";
//        do{
//        cin>>whatToDo;
//        }while(whatToDo!=1 && whatToDo!=0);
//        if(whatToDo==1){
//            ssave=whattoDo;
//        }else{
//            cout<<endl;
//            inventory();
//        }
//        cout<<endl;
//         inventory();
//    }
//    void putMoneyToTheBankAccount(){
//        whatToDo=0;
//        cout<<"how much you want put rubles:";
//        cin>>whatToDo;
//        cout<<"are you sure:";
//        cin>>whattoDo;
//        if(whattoDo=="yes"){
//            save=whatToDo+save;
//        }
//        cout<<endl;
//        inventory();
//    }
//    void changeRubblesToDollars(){
//        int qes=0;
//        cout<<"how much you want to change:";
//        cin>>whatToDo;
//        if(whatToDo>save){
//            cout<<"sory put more money to the account"<<endl;
//            inventory();
//        }
//        cout<<"1 = rubles to the dollars or 2 = dollars to the rubles:";
//        cin>>qes;
//        if(qes>2 || qes<1){
//            cout<<"sory can you repeat"<<endl;
//            inventory();
//        }
//        cout<<"are you sure:";
//        cin>>whattoDo;
//        if(whattoDo=="yes"){
//            if(qes==1){
//                dollarSave=whatToDo/67;
//                save=save-dollarSave*67;
//            }else if(qes==2){
//                dollarSave=dollarSave-whatToDo;
//                save=save+whatToDo*67;
//            }
//        }
//        cout<<endl;
//         inventory();
//    }
//    void giveMoneyforAnotherOne(){
//        cout<<"for who you want give money:";
//        cin>>whattoDo;
//        cout<<"how much you want give money:";
//        cin>>whatToDo;
//
//        cout<<"dollars = 1, rubles = 2"<<endl;
//            cin>>oneOperation;
//            if(oneOperation>2 || oneOperation<1){
//                cout<<"please repeat operation"<<endl;
//                cout<<endl;
//                inventory();
//            }
//        if(oneOperation==1){
//            if(dollarSave>0){
//                dollarSave=dollarSave-whatToDo;
//
//            }else{
//                cout<<"sorry can you change rubles to dollars"<<endl;
//                inventory();
//            }
//        }
//        if(oneOperation==2){
//            if(save>=whatToDo){
//                save=save-whatToDo;
//            }else{
//                cout<<"sorry put to account more money"<<endl;
//                inventory();
//            }
//        }
//
//
//        cout<<endl;
//        inventory();
//    }
//    void inventory(){
//        whatToDo=0;
//        cout<<"give for some one rubles = 1"<<endl;
//        cout<<"give Account For The Annother = 2"<<endl;
//        cout<<" make rubles to dollars = 3"<<endl;
//        cout<<"put money to the bank account = 4"<<endl;
//        cout<<"watch account changes = 5"<<endl;
//        cin>>whatToDo;
//        if(whatToDo==1){
//            giveMoneyforAnotherOne();
//        }else if(whatToDo == 2){
//            giveAccountForTheAnnother();
//        }else if(whatToDo == 3){
//            changeRubblesToDollars();
//        }else if(whatToDo == 4){
//             putMoneyToTheBankAccount();
//        }else if(whatToDo==5){
//            cout<<endl;
//            account();
//        }
//
//    }
//    void account(){
//        cout<<"your account"<<endl;
//        cout<<"your name:"<<ssave<<endl;
//        cout<<"rubles on account:"<<save<<endl;
//        cout<<"dollars on account:"<<dollarSave<<endl;
//        cout<<endl;
//        inventory();
//    }
//};
//int main(){
//    Account account1;
//    account1.acountRegister();
//}
