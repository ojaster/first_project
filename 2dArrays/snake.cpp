#include <iostream>
#include <stdlib.h>
using namespace std;

    bool gameover;
    const int width = 20;
    const int height = 20;
    int x, y, fruitx, fruity, score;
    enum eDirection {stop = 0, left, right , up, down };
    eDirection dir;

void Setup(){
    gameover = false;
    dir = stop;
    x = width / 2;
    y = height / 2;
    fruitx = rand() % width;
    fruitx = rand() % height;
    score = 0;
}

void Draw(){
    system("clear");
    for(int i=0; i<width; i++)
        cout<<"#";
        cout<<endl;
    

    for(int i=0; i<height; i++){
        for(int j=0; j<width; j++){
           if(j == 0 || j == width - 1){
               cout<<"#";
               if(i== y && j==x){
                   cout<< "0";
               }
               else if (i == fruity && j ==fruitx){
               cout<< "f";
               }
           }else{
               cout<<" ";
           }
        }
        cout<<endl;    
    }

    for(int i=0; i<width; i++)
        cout<<"#";
        cout<<endl;
    
}

void input(){

}

void logic(){

}


int main(){
    Setup();
    //while(!gameover) {
        Draw();
       // input();
      //  logic();
    //}

    return 0;
}