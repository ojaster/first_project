////
////  bank2.cpp
////  FIrst_Project
////
////  Created by Данил on 05/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include "bank2.hpp"
//#include <iostream>
//#include <stdlib.h>
//#include <time.h>
//#include "QeueExample.hpp"
//using namespace std;
//const int MIN_PER_HR = 60;
//bool newCustomer(double x);
//
//int main(){
//    srand((unsigned int)time(NULL));//случайная инициализация rand()
//    int qs;//максимальный размер очереди
//    cout<<"enter max size of qs"<<endl;
//    cout<<":";
//    cin>>qs;
//    QeueExample line(qs);//очередь может содержать до qs людей
//    int hours;
//    cout<<"this is a number of simulation hours"<<endl;
//    cout<<":";
//    cin>>hours;
//    //эмуляция запускает один цикл в минуту
//    long cycleLimit = MIN_PER_HR * hours;//количество циклов
//    double perHour;//среднее количество появлений за час
//    cout<<"the avarage number of customers"<<endl;
//    cout<<":";
//    cin>>perHour;
//    double min_per_cust;//среднее время между появлениями
//    min_per_cust = MIN_PER_HR / perHour;
//    Item temp;//данные нового клиента
//    long turnAways;// не допущены в полную очередь
//    long customers = 0;//присоедиены к очереди
//    long served = 0;//обслужены во время эмуляции
//    long sumLine = 0;//общая длина очереди
//    int waitTime = 0;//время до освобождения банкомата
//    long lineWait = 0;//общее время в очереди
//    
//    //запуск моделирования
//    for(int cycle = 0; cycle < cycleLimit; cycle++){
//        if(newCustomer(min_per_cust)){//есть новый пришедший клиент
//            if(line.isFull()){
//                turnAways++;
//            }else{
//                customers++;
//                temp.set(cycle);//cycle - время прибытия
//                line.enqueue(temp);//добавление новичка в очередь
//            }
//        }
//        if(waitTime==0 && !line.isEmpty()){//если нет времени ожидания и очередь не пустая
//            //обслуживание следующего клиента
//            line.dnqueue(temp);
//            waitTime = temp.prime(); // время, которое клиент проведет занимая банкомат 1 2 3
//            lineWait+= cycle - temp.when();
//            served++;
//        }
//        if(waitTime > 0){
//            waitTime--;
//        }
//        sumLine+=line.qCount();
//    }
//    //вывод результатов
//    if(customers > 0 ){
//        cout<< "customers accepted:"<<customers<<endl;
//        cout<< "customers served:"<<served<<endl;//обслужено клиентов
//        cout<< "turnaways:"<<turnAways<<endl;//не принятно клиентов
//        cout<<"average queue size:";//средний размер очереди
//        cout<<(double)sumLine/(double)cycleLimit<<endl;
//        cout<<"average wait time:"<<(double)lineWait/(double)served<<endl;//среднее время ожидания (минут)
//    }else{
//        cout<<"no customers"<<endl;
//    }
//    
//}
//// x= среднее время в минутах между клиентами
////возвращается значение true если в эту минуту появляется клиент
//bool newCustomer(double x){
//    return(rand() * x / RAND_MAX < 1);
//}
