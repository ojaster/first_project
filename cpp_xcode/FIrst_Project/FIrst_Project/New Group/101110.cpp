//#include <iostream>
//using namespace std;
//class B{
//public:
//    void print(){
//        cout<<"b"<<endl;
//    }
//};
//class C:public B{
//public:
//    void print(){
//        cout<<"c"<<endl;
//    }
//};
//
//class A:public B{
//public:
//    void print(){
//        cout<<"a"<<endl;
//    }
//};
//void print(int (*mas)[10],int n){
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            cout<<mas[i][j]<<" ";
//        }
//        cout<<endl;
//    }
//}
//void changeValue(int (*mas)[10], int n){
//    for(int i=0; i<10; i++){
//        for(int j=0; j<10; j++){
//            mas[i][j] = n;
//        }
//    }
//}
//int main(){
//    int massive[10][10];
//    changeValue(massive, 1);
//    print(massive,10);
//    changeValue(massive, 2);
//    print(massive,10);
//    
////    int * p = new int[10];
////    int res = (int)p;
////
//    double v = 5.6;
//    double * r = &v;
//    int p = int((*r));
//    int *r1 = &p;
//    
//    
//    //&(int(r));
//
//}
//// 1 2 3 4 5
//// 4 5  7 8
