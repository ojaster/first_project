//
//  static.cpp
//  FIrst_Project
//
//  Created by Данил on 30.09.18.
//  Copyright © 2018 Daniil. All rights reserved.
//

//#include <iostream>
//using namespace std;
//float getavg(float data);
//int main(){
//    float data =1, avg;
//    while(data!=0){
//        cout<<"input number:";
//        cin>>data;
//        avg = getavg(data);
//        cout<<avg<<endl;
//    }
//}
//
////Находит среднее арифметическое всех введенных значений
//float getavg(float data){
//    //Инициализация статических переменных (sum, count) происходит один раз - во время первого вызова функции
//    //При последующих вызовах повторной инициализации не происходит как это должно было быть в случе с обычными локальными переменными
//    static int sum = 0;
//    static int count = 0;
//    count++;
//    sum+=data;
//    return sum/count;
//}
