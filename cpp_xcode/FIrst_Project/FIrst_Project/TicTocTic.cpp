//
//  TicTocTic.cpp
//  FIrst_Project
//
//  Created by Данил on 09/02/2019.
//  Copyright © 2019 Daniil. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;
void instructions();
char askYesNo(string question);
int askNumber(string question,/*string question*/ int high, int low=0);
char humanPiece();
char oponent(char piece);
void displayBoard(const vector<char> & board);
char winner( const vector<char> & board);
bool isLegal(const vector<char> & board, int move);
int humanMove(const vector<char> & board, char human);
int computerMove(vector<char>board, char computer);
int computerMove2(vector<char>board, char computer);
void announceWinner(char winner, char computer, char human);


const char EMPTY = ' ';
const char X = 'X';
const char O = 'O';
const char NO_ONE = 'N';
const char TIE = 'T';
int main(){
    int move;
    const int NUM_SQUEARES = 9;
    vector<char>board(NUM_SQUEARES,EMPTY);// создаем вектор из 9 элементов ' '
    instructions();

    char human = humanPiece();
    char computer = oponent(human);

    char turn = X;
    displayBoard(board);
    while(winner(board) == NO_ONE){
        if(turn == human){
            move = humanMove(board, human);
            board[move] = human;
        }else{
            move = computerMove2(board, computer);
            board[move] = computer;
        }
         displayBoard(board);
        turn = oponent(turn);
    }
    announceWinner(winner(board), computer, human);

}

int askNumber(string question, int high, int low){
    int res = 0;
    do{
        cout<<question<<endl;
        cout<<"enter a number from: "<<high<<" to low: "<<low<<endl;
        //cout<<"enter number:";
        cin>>res;
    }while(res>high || res<low);
    return res;
}

char askYesNo(string question){
    cout<<question;
    char r;
    cin>>r;
    return r;
}

void instructions(){
    cout<<"Welcome to the ultimate man-machine show down: Tic-Tac-Toe."<<endl;
    cout<<"--where human brain is pit against silicon processor"<<endl;
    cout<<endl;
    cout<<"Make your move know by entering a number, 0 - 8. The number"<<endl;
    cout<<"corresponds to the desired board position, as illustrated:"<<endl;
}
char humanPiece(){
    char goFirst = askYesNo("Do you requir the first move? (y/n):");
    if(goFirst == 'y'){
        cout<<"Then take the first mobe. you will need it\n";
        return X;
    }else{
         cout<<"Then  computer take the first mobe. \n";
        return O;
    }
}

char oponent(char piece){
    if(piece=='X'){
        return 'O';
    }else{
        return 'X';
    }
}
void displayBoard(const vector<char> & board){
    cout<<board[0]<<"|"<<board[1]<<"|"<<board[2]<<endl;
    cout<<"------"<<endl;
    cout<<board[3]<<"|"<<board[4]<<"|"<<board[5]<<endl;
    cout<<"------"<<endl;
    cout<<board[6]<<"|"<<board[7]<<"|"<<board[8]<<endl;
}
char winner(const vector<char> & board){
    //все возможные выигрышные ряды
    const int WINNINGS_ROWS[8][3]={
        {0,1,2},
        {3,4,5},
        {6,7,8},
        {0,3,6},
        {1,4,7},
        {2,5,8},
        {0,4,8},
        {2,4,6},
    };

    const int TOTAL_ROWS=8;
    for(int row=0; row<TOTAL_ROWS; row++){
        int index0 = WINNINGS_ROWS[row][0]; // 0  3 6
        int index1 = WINNINGS_ROWS[row][1]; // 1  4 7
        int index2 = WINNINGS_ROWS[row][2]; // 2  5 8
        
        if((board[index0] != EMPTY)){
        if(  (board[index0] == board[index1]) && (board[index1] == board[index2])){
            return board[index0];
        }
        }
    }
    //так как победитель не определился,  проверяем, не наступила ли ничья
    if(count(board.begin(),board.end(), EMPTY) == 0){
        return TIE;
    }
    //Так как победитель не определился и ничья еще не наступила игра продолжается
    return NO_ONE;
}

//Получает игровое поле и сделанный ход , возвращает true если ход сделан по аправилам, false - еслм не по правиоам
//Ход по правилам - вставка X или  О в пустую клетку
inline bool isLegal(const vector<char> & board, int move){
    return (board[move] == EMPTY);
}
//возвращает номер той клетки, в которую пользователь хочет поставить свой символ
//и ждет пока пользователь не плходит по правилам
//потом возвращает сделанный ход
int humanMove(const vector<char> & board, char human){
    int move = askNumber("Where will you move?", (int)(board.size() - 1));
    while(!isLegal(board, move)){
        cout<<"that square is already occupied\n";
        move = askNumber("Where will you move?", (int)(board.size() - 1));
    }
    cout<<"Fine...\n";
    return move;
}

int computerMove2(vector<char>board, char computer){
   
    bool found=false;
    unsigned int move=0;
    //если компьютер может выиграть следующим ходом то он делает этот ход
    while(!found && move<board.size()){
        if(isLegal(board, move)){
            board[move]=computer;
            cout<<"winner board"<<endl;
            if(winner(board) == computer){
                cout<<"1 strategy"<<endl;
                found=true;
            }
            board[move]=EMPTY;
        }
        if(found==false){
            move++;
        }
    }
    //иначе если следующим шагом может выиграть человек - блокировать его ход
    if(!found){
        move=0;
        char human=oponent(computer);
        while(!found && move<board.size()){
            if(isLegal(board, move)){
                board[move]=human;
                if(winner(board) == human){
                    cout<<"2 strategy"<<endl;
                    found=true;
                   
                }
                board[move]=EMPTY;
            }
            if(found==false){
                move++;
            }
        }
    }
     if(!found){
         const int bestMoves [] ={4,0,6,2,8,5,1,3,7};
         //выбрать оптимальную клетку
         int i =0;
         while(!found && i<board.size()){
             move = bestMoves[i];
             if(isLegal(board, move)){
                 cout<<"3 strategy"<<endl;
                 found=true;
             }
             i++;

         }

     }
    cout<<"computer="<<move<<endl;
    return move;

}


void announceWinner(char winner, char computer, char human){
    if (winner == computer) {
        cout<<"Computer won"<<endl;
    }else if(winner == human){
        cout<<"Human Won"<<endl;
    }else{
        cout<<"it's a Tie"<<endl;
    }
}
