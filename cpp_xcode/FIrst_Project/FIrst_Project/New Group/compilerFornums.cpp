////
////  compilerFornums.cpp
////  FIrst_Project
////
////  Created by Данил on 13/11/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//// compiler
//#include <iostream>
//#include <string>
//using namespace std;
//struct token{
//  int priority = 0;
//  char symbol;
//};
//int check(char a,int &priority){
//    switch(a){
//        case '(':
//             priority+=4;
//             break;
//        case ')':
//             priority-=4;
//             break;
//        case '*':
//             priority = 2;
//             break;
//        case'/':
//             priority = 2;
//             break;
//        case '+':
//            priority = 1;
//            break;
//        case '-':
//            priority = 1;
//            break;
//            
//        default:
//             break;
//    }
//    return priority;
//}
//void merge(token *arr, int l, int m, int r)
//{
//    int i, j, k;
//    int n1 = m - l + 1;
//    int n2 =  r - m;
//  
//    /* create temp arrays */
//    token L[n1], R[n2];
//  
//    /* Copy data to temp arrays L[] and R[] */
//    for (i = 0; i < n1; i++)
//        L[i] = arr[l + i];
//    for (j = 0; j < n2; j++)
//        R[j] = arr[m + 1+ j];
//  
//    /* Merge the temp arrays back into arr[l..r]*/
//    i = 0; // Initial index of first subarray
//    j = 0; // Initial index of second subarray
//    k = l; // Initial index of merged subarray
//    while (i < n1 && j < n2)
//    {
//        if (L[i].priority >= R[j].priority)
//        {
//            arr[k] = L[i];
//            i++;
//        }
//        else
//        {
//            arr[k] = R[j];
//            j++;
//        }
//        k++;
//    }
//  
//    while (i < n1)
//    {
//        arr[k] = L[i];
//        i++;
//        k++;
//    }
//  
//    while (j < n2)
//    {
//        arr[k] = R[j];
//        j++;
//        k++;
//    }
//}
//  
//void mergeSort(token * arr, int l, int r)
//{
//    if (l < r)
//    {
//        int m = l+(r-l)/2;
//  
//        mergeSort(arr, l, m);
//        mergeSort(arr, m+1, r);
//  
//        merge(arr, l, m, r);
//    }
//}
//int main(){
//    string txt = "1*(2+3)";
//    int i = 0;
//    int size = txt.size();
//    token tokens[size];
//    int priority =0;
//    while(i != size){
//        check(txt[i],priority);
//        if(priority > 1){
//            tokens[i-1].priority += priority;
//            tokens[i+1].priority += priority;
//        }
//        tokens[i].priority = priority;
//        tokens[i].symbol = txt[i];
//        i++;
//    }
//    mergeSort(tokens,0,size-1);
//    for(int i=0; i<size; i++){
//        cout<<tokens[i].symbol<<endl;
//    }
//    
////      char numbers[3];//memmory
////      char symbols[4];//memmory
////      for(int i=0; i<size; i++){
////          if(tokens[i].symbol >= 49 && tokens[i].symbol <= 57){
////              numbers[i] = tokens[i].symbol;
////              continue;
////          }
////          symbols[i] = tokens[i].symbol;
////      }
////      for(int i=0; i<size; i++){
////          cout<<char(numbers[i])<<endl;
////          cout<<char(symbols[i])<<endl;
////      }
//}
