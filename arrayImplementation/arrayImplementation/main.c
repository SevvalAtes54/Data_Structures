//
//  main.c
//  arrayImplementation
//
//  Created by Macbook Air on 23.11.2023.
//

#include <stdio.h>
#include<stdlib.h>

#define STACK_SIZE 10

typedef struct {
    int top;
    int data[STACK_SIZE];
}STACK;

void push(STACK *stk,int x);
int pop(STACK *stk);
int main(int argc, const char * argv[]) {
    STACK *stk = malloc(sizeof(stk));
    stk->top = -1;
    
    
    
    
    return 0;
}

void push(STACK *stk,int x){
    if(stk->top == STACK_SIZE-2){
        printf("the stack is full");
    }
    else{
        
       stk->top++;
        stk->data[stk->top] = x;
    }
    
}


int pop(STACK *stk){
    int x;
    if(stk->top == 0){
        printf("the stack is empty ");
        return 0;
    }
    else{
        
    
     x =  stk->data[stk->top];
      stk->top--;
      
    }
    return x;
}
