//
//  main.c
//  PushPopOperations
//
//  Created by Macbook Air on 5.11.2023.
//
#include <stdlib.h>
#include <stdio.h>
#define STACK_SIZE 5
struct node {
    int num;
    struct node *next;
    
};

typedef struct stack {
    struct node *top;
    int counter;
}Stack;
Stack *pop(Stack *stk);
Stack *push (Stack *stk,int value);
int main(int argc, const char * argv[]) {
    struct node *head = NULL;
    Stack *stk = NULL ;
    for(int i = 1 ;i<5;i++){
        stk = push(stk, i);
    }
    
    stk = pop(stk);
    struct node *current = stk->top;
    while (current != NULL) {
        printf("%d\n",stk->top->num);
        current = current ->next;
    }
    printf("\n");
    printf("\n");
    printf("\n");
    current = stk->top;
    while (current != NULL) {
        printf("%d\n",stk->top->num);
        current = current ->next;
    }
    printf("\n");
    return 0;
    
}

Stack *push(Stack *stk, int value) {
    struct node *temp = malloc(sizeof(struct node));
    if (temp == NULL) {
        printf("Bellek tahsisi hatası\n");
        exit(1);
    }
    temp->num = value;
    
    if (stk == NULL) {  // İlk eleman ekleniyorsa
        temp->next = NULL;
        stk = malloc(sizeof(Stack));
        stk->top = temp;
        stk->counter = 1;
    } else {
        if (stk->counter >= STACK_SIZE) {
            printf("Yığın dolu\n");
        } else {
            temp->next = stk->top;
            stk->top = temp;
            stk->counter++;
        }
    }
    
    return stk;
}
Stack *pop(Stack *stk){
    struct node*temp;
    if(stk->counter == 0){
        printf("stack is empty");
    }
    else{
        temp = stk->top;
        stk->top = stk->top->next;
        free(temp);
        stk->counter--;
    }
     return stk;
}
