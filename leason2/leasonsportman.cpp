#include <iostream>
using namespace std;
int main(){
    int day=0;
    float y,x,sum=0;
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    //Повторять тело цикла до тех пор, пока условие будет истинно пока не пройдем весь путь
    while(sum<y){ // пока общее число пройденного пути < заданного y
       sum+=x+x/10;
       day++; // day=day+1 , day+=1
    }
    cout<<day<<endl;
}