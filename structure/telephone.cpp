#include <iostream>
using namespace std;
struct phonenumber{
    int gorod;
    int station;
    float abonent;
};
struct phone{
    phonenumber moi;
    phonenumber ego;
};

int main(){
    phone phones;
    phones.moi.gorod = 212;
    phones.moi.station = 767;
    phones.moi.abonent = 8900;

    phones.ego.gorod = 415;
    phones.ego.station = 555;
    phones.ego.abonent = 1212;
    cout<<"Введите код города. номер станции и номер абонента:"<<endl;
    cout<<"мой номер"<<" "<<"("<<phones.moi.gorod<<")"<<" "<<phones.moi.station<<"-"<< phones.moi.abonent<<endl;
    cout<<"ваш номер"<<" "<<"("<<phones.ego.gorod<<")"<<" "<<phones.ego.station<<"-"<< phones.ego.abonent<<endl;
}   