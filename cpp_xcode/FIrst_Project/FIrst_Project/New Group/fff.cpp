////
////  fff.cpp/Users/daniil/FirstProject/leason2/cpp_xcode/FIrst_Project/FIrst_Project
////  FIrst_Project
////
////  Created by Данил on 17.5.2020.
////  Copyright © 2020 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <iostream>
//#include <stdlib.h>
//#include <unistd.h>
//#include <sys/types.h>
//using namespace std;
//int main(){
//    
//    
//    write(1, "$", 2);
//    get input(inputbuff);
//    parse_input(input)
//    
//    
//    
//    int pid = fork();
//    if(pid == -1){
//        perror("fork");
//        exit(1);
//    }
//    if (pid == 0){
//        //эта часть кода выполняется дочерним процессом
//        printf("потомок");
//    }else{
//        printf("родитель");
//    }
//    
//   //void perror (const char *s);
//    
//    
//    
//    char *obrk;
//    char * nbrk;
//    char *naddr;
//    //определим текущий брейк-адрес
//    obrk = (char*)sbrk(0);
//    printf("current break address=0x%x",obrk);
//    //выделим 64 байта из хипа
//    naddr = (char*)malloc(128*4);
//    printf("\nmalloc(64)\n");
//     //определим текущий брейк-адрес
//    nbrk = (char*)sbrk(0);
//    printf("current break address=0x%x\n",nbrk);
//    free(naddr);
//}
