////
////  firstC.c
////  FIrst_Project
////
////  Created by Данил on 10/10/2019.
////  Copyright © 2019 Daniil. All rights reserved.
////
//
//#include <stdio.h>
//#include <malloc/_malloc.h>
//struct Stack{
//    int top;
//    int size;
//    int maxSize;
//    int *massive;
//};
////void show(int top, int size, int maxSixe, int * massive);
////int algo(int maxSize, int * arr);
//void error(char * code){
//    printf(code);
//    printf("\n");
//}
//void print(struct Stack s){
//    for(int i=0; i<s.maxSize; i++){
//        printf("%d",s.massive[i]);
//        printf("\n");
//    }
//}
//void instructions(){
//    printf("1.introduce\n");
//    printf("2.instructions\n");
//    printf("3.push front\n");
//    printf("4.pop front\n");
//    printf("5.print massive\n");
//}
//void createStack(int size,struct Stack * s){
//    s->massive = malloc(size * sizeof(int));
//    s->maxSize = size;
//    s->size = 0;
//    s->top = 0;
//    for(int i=0; i<s->maxSize; i++){
//        s->massive[i] = 0;
//    }
//}
//void push_front(struct Stack * s, int elem){
//    if(s->size == s->maxSize){
//        error("Stack is Full");
//        return;
//    }
//    s->massive[s->top] = elem;
//    s->size++;
//    s->top++;
//}
//void pop_front(struct Stack * s){
//    int top = s->top;
//    top--;
//    s->massive[top] = 0;
//    if(!(s->size-1 < 0)){
//        s->size--;
//        s->top--;
//    }
//}
//int main(){
//    struct Stack stack;
//    int size = 0;
//    printf("enter size of the stack\n");
//    scanf("%d",&size);
//    createStack(size, &stack);
//    int choose = 1;
//    int elem = 0;
//    while(choose != 0){
//        switch (choose) {
//            case 1:
//                printf("welcome to my first not oop programm\n");
//                instructions();
//                break;
//            case 2:
//                instructions();
//                break;
//            case 3:
//                printf("eneter the elem\n");
//                printf(":");
//                scanf("%d", &elem);
//                push_front(&stack, elem);
//                break;
//            case 4:
//                pop_front(&stack);
//                break;
//            case 5:
//                print(stack);
//                break;
//        }
//        choose = 1;
//        while(choose == 1){
//            printf("enter an operation");
//            printf(":");
//            scanf("%d",&choose);
//            printf("\n");
//        }
//    }
//    free(stack.massive);
//    printf("C is the most amazing language which i have ever coded on. I hope assembler will be even better\n");
//}
