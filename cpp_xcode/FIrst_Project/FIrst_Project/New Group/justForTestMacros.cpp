////
////  justForTestMacros.cpp
////  FIrst_Project
////
////  Created by Данил on 07/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//using namespace std;
//template<typename T>
//static T z;
//#define conections(x,y) cout<<macToGetTher(x)<<macToGetTher(y)<<endl;
//#define connect(x,y) (x##y)
//#define min1(x,s) ((x<s) ? (s):(x))
//#define macToGetTher(x) #x
//#define connect1(x) connect##x (z,x)
//#define connect2(s,x) start(s##x)
//#define start(x) cout<<#x<<endl;
//#define yesNo(i) (i==1) ? cout<<"yes"<<endl:cout<<"no"<<endl
//#ifndef min1
//#error "it's not right"
//#endif
//#define cout(x)\
//cout<<x<<endl;
//template<class T>
//class ret{
//    static T h;
//public:
//    static T retur(){return h;}
//};
//template<class T>
//T connectGet(T x,T y);
//int main(int argc,char *argv[]){
////    connect1(2);
////    cout<<__LINE__<<endl;
////    cout<<__DATE__<<endl;
////    cout<<__TIME__<<endl;
////    cout<<__TIMESTAMP__<<endl;
////   // long h = (long)connectGet(a,b);
////   // char g = h;
////    //cout<<g<<endl;
////    //decltype((ret::retur())) g;
////  //  cout<<ret<int>::retur()<<endl;
////#ifdef min1
////    yesNo(1);
////#else
////    yesNo(0);
////#endif
////#if min1(9,10)
////    cout<<min1(9,10)<<endl;
////#else
////    cout<<!min1(9,10)<<endl;
////    #endif
////
////    unsigned int start_time =  clock();
//////    int j = 0;
//////    int h = 0;
//////    int k = 0;
//////    int i = 0;
//////    int sum;
//////    while(sum != 36){
//////        if(i!=9){
//////            i++;
//////        }
//////        if(i == 9){
//////            if(j!=9){
//////                j++;
//////                i = 0;
//////            }
//////
//////        }
//////        if(j == 9){
//////            if(h!=9){
//////                h++;
//////                j = 0;
//////            }
//////
//////        }
//////        if(h == 9){
//////            if(k!=9){
//////                k++;
//////                h = 0;
//////            }
//////
//////        }
//////        sum = i+j+k+h;
//////        cout<<"["<<k<<"]"<<"["<<h<<"]"<<"["<<j<<"]"<<"["<<i<<"]"<<endl;
//////    }
////    unsigned int end_time = clock();
////    unsigned int search_time = end_time - start_time; // искомое время
////    cout << "runtime = " << search_time/1000.0 << endl;
////
//}
//
//template<class T>
//T connectGet(T x,T y){
//    long g = (long)macToGetTher(connect(x,y));
//    return g;
//}
//
