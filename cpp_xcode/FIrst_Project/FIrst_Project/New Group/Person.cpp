////
////  Person.cpp
////  FIrst_Project
////
////  Created by Данил on 22/06/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <vector>
//using namespace std;
//static int n = 0;
//class Person{
//private:
//    string name;
//    string lastName;
//    int age;
//public:
//    void show(){cout<<"name:"<<name<<endl;cout<<"second name:"<<lastName<<endl;cout<<"age:"<<age<<endl;}
//    Person(string firstname, string secondname, int aGe):name(firstname),lastName(secondname),age(aGe){
//        n++;
//    }
//    int get(){return age;}
//    
//    
//};
//void sort(vector<Person> &massive,int &n);
//int main(){
//    vector<Person> array;
//    Person person1{"sdfsdf","sgdfww",20};
//    Person person2{"ksdhwe","oaiaiai",30};
//    Person person3{"ksdhwe","oaiaiai",10};
//    
//     array.push_back(person1);
//     array.push_back(person2);
//     array.push_back(person3);
//    
//    for(int i=0; i<n; i++){
//        array[i].show();
//    }
//    cout<<endl;
//    sort(array,n);
//    for(int i=0; i<n; i++){
//        array[i].show();
//    }
//}
//void sort(vector<Person> &massive,int &n){
//    int in;
//    for(int i = 1; i<n; i++){
//        in = i;
//        Person temp = massive[i];
//        while(in>0 && massive[in-1].get() > temp.get()){
//            massive[in] = massive[in-1];
//            in--;
//        }
//        if(massive[in].get() == temp.get()){
//            continue;
//        }
//        massive[in] = temp;
//    }
//}
