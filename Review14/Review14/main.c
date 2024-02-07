//
//  main.c
//  Review14
//
//  Created by Macbook Air on 29.12.2023.
//


#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 10
typedef struct {
  struct node *top;
  int cnt;
  
}STACK;
struct node {
   struct node *next;
  int data;
};


STACK* pop(STACK *stk,int data){
 if(stk->cnt ==STACK_SIZE){
     printf("dolu stack");
     return stk ;
 }
 else{
     struct node *newNode = malloc(sizeof(struct node));
     newNode->data = data;
   newNode->next = stk->top;
   stk->top = newNode;
   stk->cnt ++;
     
 }
   
    return stk;
}
//int push(){
//    
//}

int main(){
    STACK *stk;
    stk= NULL;
    stk->cnt = 0;
 
     STACK *temp;
stk = pop(stk,32);
stk = pop(stk,33);
temp = stk;

while(temp->cnt>1){
    printf("%d ",temp->top->data);
    temp->cnt--;
}
    
    return 0;
    
}



