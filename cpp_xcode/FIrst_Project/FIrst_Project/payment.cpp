//
//  payment.cpp
//  FIrst_Project
//
//  Created by Данил on 12/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//
//Добавим работу с несколькими работниками
//Worker one(иван,иванов,иванович, "12-12-1999", id=1)
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//
//
//
//class Worker{
//
//private:
//    string name;
//    int id;
//    int payment;
//    int choose;
//    int save;
//    int nalog=14;
//    int oneOperation;
//    int staw;
//    int workTimeInCompany[3];
//    string days[3]{"day", "month", "year"};
//    int todayDate[3];
//    int workerBankAccount;
//    string choosee;
//    int dateWhenYouStartedWorkingInTHisCompany[3];
//    string otestvo;
//    string familia;
//
//public:
//    Worker(string n, int i){
//        name = n;
//        id = i;
//    }
//    void inputWorker(){
//        cout<<"enter your name:";
//        cin>>name;
//        cout<<"enter your otestvo:";
//        cin>>otestvo;
//        cout<<"enter your familia:";
//        cin>>familia;
//        cout<<"enter how much year are you working here"<<endl;
//        for(int i=0; i<3; i++){
//            cout<<"how much ";
//            cout<<days[i]<<" you worked:";
//            cin>>workTimeInCompany[i];
//            staw=workTimeInCompany[0];
//        }
//        cout<<"please enter todays date"<<endl;
//        for(int i=0; i<3; i++){
//            cout<<days[i]<<":";
//            cin>>todayDate[i];
//        }
//        cout<<"enter your payment:";
//        cin>>payment;
//        save=payment;
//        cout<<endl;
//    }
//    //сделать методы getЗначение() так как поля private
//    //сдлать setЗначение() - чтобы устанавливать новые значения для полей класса
//    int getid(){
//        return id;
//    }
//
//    void toString(){
//        cout<<"Worker name:"<<name<<"id:"<<id<<endl;
//    }
//};
//
//class Payment{
//private:
//    vector<Worker> workers;
//    int payment;
//    int choose;
//    int save;
//    int nalog=14;
//    int oneOperation;
//    int staw;
//    string name;
//    int workTimeInCompany[3];
//    string days[3]{"day", "month", "year"};
//    int todayDate[3];
//    int workerBankAccount;
//    string choosee;
//    int dateWhenYouStartedWorkingInTHisCompany[3];
//    string otestvo;
//    string familia;
//public:
//    void workerInfoInput(){
//        cout<<"id of your new worker = :"<<workers.size() + 1<<endl;
//        cout<<"enter your name:";
//        cin>>name;
//        cout<<"enter your otestvo:";
//        cin>>otestvo;
//        cout<<"enter your familia:";
//        cin>>familia;
//        cout<<"enter how much year are you working here"<<endl;
//        Worker worker(name,(int)workers.size() + 1, id = (int)workers.size()+1);// id = (int)workers.size() + 1
//        workers.push_back(worker);
//
//        for(int i=0; i<3; i++){
//            cout<<"how much ";
//            cout<<days[i]<<" you worked:";
//            cin>>workTimeInCompany[i];
//            staw=workTimeInCompany[0];
//        }
//        cout<<"please enter todays date"<<endl;
//        for(int i=0; i<3; i++){
//            cout<<days[i]<<":";
//            cin>>todayDate[i];
//        }
//        cout<<"enter your payment:";
//        cin>>payment;
//        save=payment;
//        cout<<endl;
//        inventory();
//    }
//    void payPayment(){
//        cout<<"do you want to pay a payment to worker:";
//        cin>>choosee;
//        cout<<"ok please wait..."<<endl;
//        if(choosee=="yes"){
//        // вывести все профили всех работников в виде ФИО + id
//            cout<<"all of your workers"<<endl;
//        for(int i=0; i<workers.size(); i++){
//            workers[i].toString();
//        }
//        //запросить с клавиатуры id
//        int id;
//        cout<<"input id of worker"<<endl;
//        cin>>id;
//
//            //найти работника из вектора с нужным id и ему начислить ЗП
//            for(int i=0; i<workers.size(); i++){ //по всем работникам
//                if(workers[i].getid()==id){
//                    cout<<"nalog = "<<nalog<<"%"<<endl;
//                    nalog=save*0.14;
//                    save-=nalog;
//                    workerBankAccount+=save;
//                    //workers[i].setworkerBankAccount(save);
//                    //осуществить начисление зарплаты
//                }
//            }
//
//        }
//        cout<<endl;
//        inventory();
//    }
//    void inventory(){
//        cout<<"see your profile 1"<<endl;
//        cout<<"pay payment 2"<<endl;
//        cout<<"more info about nalog 3 "<<endl;
//        //cout<<"when you started working 4"<<endl;
//        cin>>choose;
//        switch(choose){
//            case 1:
//                workerProfile();
//            case 2:
//                payPayment();
//            case 3:
//                nalogInfo();
//            //case 4:
//               // whenYouStartedWorking();
//        }
//    }
//    void nalogInfo(){
//        cout<<"nalog is:"<<nalog<<"%"<<endl;
//        cout<<"1 % goes to the pensionij fond"<<endl;
//        cout<<"13 % is podohodnij nalog"<<endl;
//
//    }
//    void workerProfile(){
//        cout<<"your name:"<<name<<endl;
//        cout<<"your familia"<<familia<<endl;
//        cout<<"your otestvo"<<otestvo<<endl;
//        cout<<"your payment:"<<payment<<endl;
//        cout<<"your balance:"<<workerBankAccount<<endl;
//        cout<<"your staw:"<<staw<<endl;
//        cout<<"you started working:"<<dateWhenYouStartedWorkingInTHisCompany[0]<<"."<<dateWhenYouStartedWorkingInTHisCompany[1]<<"."<<dateWhenYouStartedWorkingInTHisCompany[2]<<endl;
//        cout<<endl;
//        inventory();
//    }
//    void whenYouStartedWorking(){
//        int day;
//        int month;
//        int year;
//        for(int i=0; i<3; i++){
//            switch(i){
//                case 0:
//                    day=todayDate[i]-workTimeInCompany[i];
//                    dateWhenYouStartedWorkingInTHisCompany[i] = day;
//                case 1:
//                    month=todayDate[i]-workTimeInCompany[i];
//                    dateWhenYouStartedWorkingInTHisCompany[i] = month;
//                case 2:
//                    year=todayDate[i]-workTimeInCompany[i];
//                    dateWhenYouStartedWorkingInTHisCompany[i] = year;
//            }
//
//        }
//        cout<<endl;
//        inventory();
//    }
//};
//
//
//
//
//int main(){
//    Payment worker1;
//    worker1.workerInfoInput();
//}
