//
//  date.cpp
//  FIrst_Project
//
//  Created by Данил on 09/01/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

//#include <stdio.h>
//#include <iostream>
//using namespace std;
//class Date{
//private:
//    unsigned int year;
//    unsigned int month;
//    unsigned int day;
//
//public:
//    
//    void dateinput(){
//        cout<<"input a year:";
//        cin>>year;
//        cout<<"input a month:";
//        cin>>month;
//        cout<<"input a day:";
//        cin>>day;
//    }
//    void init(string date) { //"2018.01.04"
//        int i = 0;
//        //year
//        string month;
//        string day;
//        string year;
//        while(date[i]!='.'){
//            year+= date[i];
//            i++;
//        }
//        cout<<year<<endl;
//        //month
//        i++;
//        while(date[i]!='.'){
//            month+= date[i];
//            i++;
//        }
//        cout<<month<<endl;
//        //day
//        i++;
//        while(date[i]!='\0'){
//            day+= date[i];
//            i++;
//        }
//        cout<<day<<endl;
//        this->year=stoi(year);
//        this->month=stoi(month);
//        this->day=stoi(day);
//
//    }
//
//    //"34" - 34
//
//    void output(){
//        cout<<"your date is:";
//        cout<<day<<"."<<month<<"."<<year<<endl;
//    }
//
//    int compare(Date date2){
//        if(this->year==date2.year && this->month<date2.month && this->day<date2.day){
//            return 0;
//        }
//        if(this->year<date2.year){
//            return -1;
//        }else if(this->year>date2.year){
//            return 1;
//        }
//        if(this->month<date2.month){
//            return -1;
//        }else if(this->month>date2.month){
//            return 1;
//        }
//        if(this->day<date2.day){
//            return -1;
//        }else if(this->day>date2.day){
//            return 1;
//        }
//        return 0;
//    }
//
//    int isLeapYear(){
//        if(year%4!=0){
//            return 0;
//        }else if(year%100==0){
//            if(year%400==1){
//                return 1;
//            }else{
//                return 0;
//            }
//        }else{
//            return 1;
//        }
//        return 1;
//    }
//    void addDays(int days){//100
//        int newDays = days%30;
//        int newYears = days/365;
//        int newMonth = (days - 365*newYears)/30;
//        cout<<newDays<<endl;
//        cout<<newMonth<<endl;
//        cout<<newYears<<endl;
//
//        this->day+=newDays;
//        this->month+=newMonth;
//        this->year+=newYears;
//
//        int temp = this->day/30;
//        this->day%=30;
//        this->month+=temp;
//        this->year+=this->month/12;
//        this->month%=12;
//        output();
//    }
//};
//int main(){
//    Date date1;
//     //date1.dateinput();
//    date1.init("2018.03.");
//    Date date2;
//    date2.init("2021.03.04");
//    int yearTest=date2.isLeapYear();
//    int result=date1.compare(date2); // date1 больше date2  return == 1, else return -1, если равны 0
//    date1.output();
//    date1.addDays(270);
//    cout<<result<<endl;
//    cout<<yearTest<<endl;
//}
