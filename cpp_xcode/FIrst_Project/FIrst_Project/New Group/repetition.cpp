////
////  repetition.cpp
////  FIrst_Project
////
////  Created by Данил on 25/05/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <valarray>
//#include <string>
//
//using namespace std;
//class Student{
//private:
//    typedef valarray<double>  ArrayDb;
//        string name;//включенный объект
//        ArrayDb scores;//включенный объект
//        //закрытый метод вывода оценок
//    ostream & arrayOut(ostream & os )const{
//        int i;
//        int lim = (int) scores.size();
//        if(lim>0){
//            for(i=0; i<lim; i++){
//                os<<scores[i]<<" "<<endl;
//                if( i % 5 == 4){
//                    os<<endl;
//                }
//            }
//            if(i % 5 != 0){
//                os<<endl;
//            }
//        }else{
//            os<<"empty array";
//        }
//        return os;
//    }
//public:
//    Student():name("student is not a student"),scores(){}
//    //explicit - отключение неявое преобразование
//    explicit Student(const string & s):name(s), scores(){}
//    explicit Student(int n):name("stident is not a student"), scores(n){}
//    Student(const string & s, const ArrayDb & a) : name(s), scores(a){}
//    Student(const char * str, const double * pd, int n) : scores(pd, n), name(str) {}
//    ~Student(){}
//
//    double  average() const;
//    const string & getName() const;
//    double & operator[](int i);
//    double operator[](int i) const;
//
//    //Друзья
//    //Ввод
//    friend istream & operator >>(istream &is, Student & stu);//1 слово
//    friend istream &  getline(istream &is, Student & stu);// 1 строка
//
//    //вывод
//    friend ostream & operator <<(ostream & os, const Student & stu);
//};
//const string & Student::getName() const{
//    return name;
//}
//
//double & Student:: operator[](int i){
//    return scores[i];//ипсользует valarray<double>::operator()[]
//}
//double Student::operator[](int i) const{
//    return scores[i];
//}
//
//istream & operator >>(istream &is, Student & stu);
//istream & operator >>(istream &is, Student & stu){
//    is>>stu.name;
//    return is;
//}
//istream &  getline(istream &is, Student & stu);
//
//istream &  getline(istream &is, Student & stu){
//    getline(is, stu.name);
//    return is;
//}
//
//double  Student::average() const{
//    if(scores.size() > 0){
//        return scores.sum() / scores.size();
//    }else{
//        return 0;
//    }
//}
//ostream & operator <<(ostream & os, const Student & stu);
//
//ostream & operator <<(ostream & os, const Student & stu){
//    os<<"scores for "<<stu.name<<endl; // operator<<(ostream &, const string &)
//    stu.arrayOut(os);// использование закрытого метода scores
//    return os;
//}
//
////int main(){
////    //explicit = позволяет программисту накладывать определенные ограничения на программные конструкции
////    //отключаем неявное преобразование в конструкторах с одним аргументом
////    //const -
////    Student doh("omer");
//////    valarray<int>  q_values;//массив значений  int
//////    valarray<double>  weights;
//////    double gpa[5] = {3.1,3.5, 3.8, 2.9,3.3};
//////    valarray<double>  v1;//массив элемент double, size = 0
//////    valarray<int> v2(8);//массив из 8 элементов типа int
//////    valarray<int> v3(10,8); //массив из 8 элементов, каждый равен 10
//////    valarray<double> v4(gpa, 4);//массив из 4 элементов равных первым четерым из массива gpa
//////    valarray<int>v5 = {20,32,19,9}; //c++11
////}
//
//void set(Student & sa,int n);
//const int pupils = 3;
//const int quizzes = 5;
//
//int main(){
//    Student ada[pupils] = {Student(quizzes), Student(quizzes), Student(quizzes)};
//    int i;
//    for(i = 0; i<pupils; i++){
//        set(ada[i], quizzes);
//    }
//    cout<<"\n student list"<<endl; // вывод списка студентов
//    for(i = 0; i<pupils; i++){
//        cout<<ada[i].getName()<<endl;
//    }
//    cout<<"\n Results"<<endl; //вывод результатов
//    for(i = 0; i<pupils; i++){
//        cout<<endl<<ada[i];
//        cout<<"average "<<ada[i].average()<<endl;//средняя оценка
//    }
//    cout<<"\n Done. \n"<<endl;
//}
//void set(Student & sa, int n){
//    cout<<"Please enter the student's name:"<<endl;//ввод имени студента
//    getline(cin, sa);
//    cout<<"Please enter "<<n<<" quiz scores"<<endl;//ввод оценок студентов
//    for(int i=0; i<n; i++){
//        cin>>sa[i];
//    }
//    while(cin.get() != '\n')// пока пользователь на нажмет enter
//        continue;
//}
