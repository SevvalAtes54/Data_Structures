//
//  main.c
//  Review16
//
//  Created by Macbook Air on 29.12.2023.
//
// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
struct node {
    struct node*next;
    int data;
};

typedef struct {
    int array[STACK_SIZE];
    int top;
}STACK;

void initialization(STACK *stk){
    stk->top = -1;
};
void push(STACK*stk,int data){
    if(stk->top == STACK_SIZE-1){
        printf("stack dolu");
    }
    else{
       struct node*newNode = malloc(sizeof(struct node));
       newNode->data = data;
       stk->array[++stk->top] = newNode;
      stk->top++;
        
    }
}
int main() {
   STACK*stk = malloc(sizeof(stk));
   
   
    

    return 0;
}
