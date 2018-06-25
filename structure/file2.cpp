#include <iostream>
#include <fstream>

using namespace std;

int main(){
    char buff[50]; //буфер промежуточного хранения для текста из файла
    ifstream in("test.txt"); // открываем файл на чтение

    in>>buff; // cin>>buff
    cout<<buff<<endl; //напечатали это слово

    in.getline(buff, 50);//считываем строку
    in.close();

    cout<<buff<<endl;

}