#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
    //указатель на файл
    FILE * fp;

    //обращение к фалу
    fp = fopen("test.dat.cpp", "r"); 
    if(fp == NULL){
        cout<<"File NOT found!!"<<endl;
        return 1;
    }
   int n;
    fscanf(fp, "%d", &n);
    cout<<"n="<<n<<endl;
    fclose(fp);
}