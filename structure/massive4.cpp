#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
   srand(time(NULL));//seed
   float arr[15];
    for(int i = 0; i < 15; i++){// 0,1,2,3....14
        arr[i] = rand()%11/10.0;// 0/10....10/10    0....1
        cout <<arr[i]<< endl;
    }

    return 0;
}