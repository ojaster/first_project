////
////  weirdThing.cpp
////  FIrst_Project
////
////  Created by Данил on 12/07/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include "stack.h"
//#include <string>
//#include <string.h>
//#define strt(x) start1(x)
//#define start1(x) cout<<(" "#x)<<endl;
//using namespace std;
//class ParsePors{
//    int n;
//    char opThis;
//    StackX *stack;
//    char *something;
//public:
//    char *connection(char *temp){
//        char temp2[2] = {' ', '\0'};
//        char *temp3 = new char[strlen(temp)+strlen(temp2)+1];
//        strcat(temp3,temp);
//        strcat(temp3,temp2);
//        char temp4[strlen(temp3)];
//        strcpy(temp4, temp3);
//        delete[] temp3;
//        return temp4;
//
//    }
//    ParsePors(char *some):n((int)strlen(some)){
//        something = new char[n];
//        stack = new StackX(n);
//        strcpy(something, some);
//    }
//    char ret(){return opThis;}
//
//    long doParse(){
//        long num1;
//        long num2;
//        long  interAnswer;
//        for(int i=0; i<n; i++){
//            opThis = something[i];
//        //        char *temp = connection(something); // unused
//              //  cout<<strlen(temp)<<endl;
//                //stack->displayStack(temp);
//                if(opThis >= 49 && opThis <= 57){
//                    stack->push(opThis - '0');// -----
//                    num2 = stack->pop();
//                    num1 = stack->pop();
//                    switch (opThis) {
//                        case '+':
//                            interAnswer = num1 + num2;
//                            break;
//                        case '-':
//                            interAnswer = num1 - num2;
//                            break;
//                        case '*':
//                            interAnswer = num1 * num2;
//                            break;
//                        case '/':
//                            interAnswer = num1 / num2;
//                            break;
//                        default:
//                            interAnswer = 0;
//                    }
//                    stack->push(interAnswer);
//                }
//
//
//        }
//        if(!stack->isEmpty()){
//            interAnswer = stack->pop();
//            return interAnswer;
//        }else{
//            return 0;
//        }
//    }
//};
//class PostFixApp{
//public:
//    //345 + × 612+/–
//    //3*(4+5) - 6/(1+2) = 25
//    void start(char *str){// problem is here. It sends '\0' Reason unkown
//            char *str1;
//            str1 = new char[strlen(str)];
//            strcpy(str1, str);
//            ParsePors parser(str1);
//            long g = parser.doParse();
//            cout<<"res:"<<g<<endl;
//            delete [] str1;
//    }
//};
//int priority(char op);
//int main(){
//
//    const int n = 13;
//  // char something[n]  = {'3','*','(','4','+','5',')','-','6','/','(','1','+','2',')'};//work
//    // char something[n] = {'3','+','1','*','5','-','7'};// work
//    //char something[n] = {'(','3','+','6',')','*','4'};//work
//    //char something[n] = {'(','1','+','2','*','8',')','/','2'};//work
//    //char something[n] = {'(','3','*','(','4','+','5',')','+','6',')','/','2'};// work
//   // '3','1','5','*','+','7','-'
//    //'3','1','5','*','7','-','*'
//    int i = 0;
//    StackX stack1(n);
//    char opThis = NULL;
//    StackX stack(n);
//    label:{
////        if(opThis == ')' && stack.peek()-1 == '('){ I just want to keep this programm code
////            stack.pop();
////            goto label;
////        }
//        if(i>=n){
//            if(!stack.isEmpty()){
//                while(!stack.isEmpty()){
//                    if(stack.peek() == ')' || stack.peek() == '('){
//                        stack.pop();
//                    }else{
//                        stack1.push(stack.peek());
//                        cout<<stack.pop()<<endl;
//                    }
//                }
//            }
//            goto end;
//        }else{
//            opThis = something[i++];
//        }
//        if(opThis >=48 && opThis<=57){
//            stack1.push(opThis);
//            cout<<opThis<<endl;
//            goto label;
//        }
//
//        if(!(opThis >= 48 && opThis <= 57)) {
//            if(stack.isEmpty() || stack.peek() == '('){
//                    stack.push(opThis);
//                    goto label;
//            }
//            if(priority(opThis)>priority(stack.peek())) {
//                stack.push(opThis);
//                goto label;
//            }
//            if(priority(opThis) <= priority(stack.peek())) {
//                    while(!stack.isEmpty()){
//                         if(stack.peek() == ')' || stack.peek() == '('){
//                             stack.pop();
//                         }else{
//                            stack1.push(stack.peek());
//                             cout<<stack.pop()<<endl;
//                         }
//                    }
//                stack.push(opThis);
//                goto label;
//
//            }
//        }
//    }
//    //ascii
//     end:{
////         cout<<endl;
////         stack1.display();
////         char str[stack1.size()];
////         PostFixApp str1;
////         cout<<endl;
////         for(int j=stack1.size(); j>0; j--){
////             str[j] = stack1.pop();
////         }
////         for(int j = 0; j<stack1.size(); j++){
////             cout<<str[j]<<endl;
////         }
////         str1.start(str);
//        return 0;
//    }
//}
//int priority(char op) {
//    return op == '+' || op == '-' ? 1 : op == '*' || op == '/' || op == '%' ? 2 : op == '(' ? 3:-1;
//}
