// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 5
struct node {
    struct node*next;
    int data;
};
typedef struct {
    struct node*top;
    int cnt;
}STACK;

void push(STACK *stk,int deger){
    if(stk->cnt == STACK_SIZE){
        printf("the stack is full");
      
    }
    else{
        struct node *newNode = malloc(sizeof(struct node));
        newNode ->data = deger;
        newNode ->next = stk->top;
        stk->top = newNode;
        stk->cnt ++;
        
        
    }
    
    
    
    
}
int pop(STACK *stk){
    if(stk->cnt == 0){
        printf("stack is empty");
        return -50;
    }
    else{
        int a;
        struct node * deleted;
        deleted = stk->top;
         a = deleted->data;
        stk->top = stk->top->next;
        free(deleted);
        stk->cnt --;
        return  a;
    }
    
}

void initialization(STACK *stk){
    stk->top = NULL;
    stk ->cnt = 0;
}

int main() {
    STACK *stk = malloc(sizeof(STACK));
    initialization(stk);
   push(stk,23);
  
   push(stk,5456);
     push(stk,1212);
        push(stk,567687);
           push(stk,866);
       STACK *temp;
       temp = stk;
      
     while (temp->cnt >0){
         int a;
          a = pop(stk);
         printf("%d  ",a);
        
         printf(" * %d* ",temp->cnt);
     }
    

    return 0;
}
