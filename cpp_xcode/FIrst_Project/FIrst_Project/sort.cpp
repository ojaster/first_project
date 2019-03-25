//#include <stdio.h>
//#include <iostream>
//#include <string>
//using namespace std;
//class Min{
//private:
//    int res= 999999;
//    int result[6]{
//        1,
//        2,
//        4,
//        3,
//        7,
//        5
//    };
//public:
//    void greet();
//    void  sort();
//};
//void Min::greet(){
//    for(int i=0; i<6; i++){
//        if(result[i] < res){
//            res = result[i];
//        }
//    }
//    cout<<res<<endl;
//
//}
//void Min::sort(){
//    int k;
//    int x;
//    for (int i =0; i<6; i++){ //o(n*n)
//        k = i; //сохраняем инлекс текущего минимального элемента ( с кооторого начинаем)
//        x = result[i];
//        for(int j = i+1; j < 6; j++){ //ищем минимальный среди оставшизся справа
//            if(result[j] < x){
//                k = j;
//                x = result[j];
//            }
//        }
//        //на место минимального ставим  первый элемент из неотсортированной части массива
//        result[k] = result[i];
//        //ставим минимальный элемент на место i (индекс из неотсортированной части массива)
//        result[i] = x;
//    }
//    cout<<endl;
//    for (int i=0; i<6; i++) {
//        cout<<result[i]<<endl;
//    }
//
//}
//int main(){
//    Min minimum;
//    minimum.sort();
//    cout<<endl;
//    minimum.greet();
//
//}
