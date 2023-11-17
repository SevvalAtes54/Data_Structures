//
//  main.c
//  DATA_EXERCISE
//
//  Created by Macbook Air on 11.11.2023.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struct node{
//    struct node*next;
//    int data;
//};
//struct node*addWanted(struct node*head,int data,int add);
//struct node*addEnd(struct node*head,int data);
//struct node*addFront(struct node*head,int data);
//struct node*deleteWanted(struct node*head,int data);
//
//int main(int argc, const char * argv[]) {
//    struct node*head = NULL;
//    struct node*temp;
//    
//    head  = addFront(head, 5);
//    temp = head;
//    while (temp!=NULL) {
//        printf("%d ",temp->data);
//        temp = temp->next;
//        
//    }
//    printf("\n");
//    
//    
//    head  = addEnd(head, 10);
//    head  = addEnd(head, 15);
//    temp = head;
//    while (temp!=NULL) {
//        printf("%d ",temp->data);
//        temp = temp->next;
//        
//    }
//    printf("\n");
//    
//    
// 
//    head = addWanted(head, 10,13);
//    temp = head;
//    while (temp!=NULL) {
//        printf("%d ",temp->data);
//        temp = temp->next;
//        
//    }
//    printf("\n");
//    
//    
//    
//    head = deleteWanted(head, 13);
//       temp = head;
//       while (temp!=NULL) {
//           printf("%d ",temp->data);
//           temp = temp->next;
//           
//       }
//       printf("\n");
//    return 0;
//}
//struct node*addFront(struct node*head,int data){
//    struct node*temp;
//    struct node*newNode =  malloc(sizeof(struct node));
//    newNode->data = data;
//    if(head == NULL){
//        head = newNode;
//        return head;
//    }
//    else{
//        newNode->next = head;
//        head->next = NULL;
//    }
//    
//    return head;
//}
//struct node*addEnd(struct node*head,int data){
//    struct node*temp;
//    struct node*newNode =  malloc(sizeof(struct node));
//    newNode->data = data;
//    temp = head;
//    while (temp->next !=NULL) {
//        temp = temp->next;
//    }
//    temp->next = newNode;
//    newNode->next = NULL;
//    
//    return head;
//}
//struct node*addWanted(struct node*head,int data,int add){
//    struct node*temp;
//    struct node*newNode =  malloc(sizeof(struct node));
//    newNode->data = add;
//    temp = head;
//    while (temp->next !=NULL && temp->data !=data) {
//        temp = temp->next;
//    }
//    newNode->next = temp->next;
//    temp->next = newNode;
//    
//    
//    return head;
//}
//
//
//struct node*deleteWanted(struct node*head,int data){
//    
//    struct node*temp;
//    struct node*deleted;
//    temp = head;
//    
//    while (temp->next != NULL && temp->next->data !=data) {
//        temp = temp->next;
//    }
//    deleted=temp;
//    deleted = deleted->next;
//    temp->next = deleted ->next;
//    free(deleted);
//    
//    return head;
//}
//
//

//
////DOUBLE LINKED LISTS
//// **************************************************
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struct node*adding(struct node*head,int data);
//struct node*deleting(struct node*head,int data);
//struct node{
//    struct node*next;
//    struct node*prev;
//    int data;
//};
//int main(int argc, const char * argv[]) {
//    struct node*head = NULL;
//    struct node*temp ;
//    head = adding(head,12);
//    head = adding(head,11);
//    head = adding(head,10);
//    
//    
//    temp = head;
//        while (temp!=NULL) {
//            printf("%d ",temp->data);
//            temp = temp->next;
//    
//        }
//        printf("\n");
//        
//    head = deleting(head,11) ;
//    temp = head;
//        while (temp!=NULL) {
//            printf("%d ",temp->data);
//            temp = temp->next;
//    
//        }
//        printf("\n");
//    
//    return 0;
//}
//struct node*adding(struct node*head,int data){
//    struct node*temp ;
//    struct node*newNode ;
//    newNode = malloc(sizeof(struct node));
//    newNode->data = data;
//    temp = head;
//    if(head==NULL){
//        head = newNode;
//    }
//    else{
//        head->prev = newNode;
//        newNode->next = head;
//        head = newNode;
//    }
//    
//    
//    return  head;
//}
//
//
//
//struct node*deleting(struct node*head,int data){
//    struct node*temp ;
//    struct node*deleted ;
//   
//    temp = head;
//    if(head==NULL){
//        printf("there is nothing to delete");
//        return 0;
//    }
//    if (head->data == data) {
//            deleted = head;
//            head = head->next;
//            if (head != NULL) {
//                head->prev = NULL;
//            }
//            free(deleted);
//            return head;
//        }
//   
//        while (temp->next!=NULL && temp->data != data) {
//            temp = temp->next;
//        }
//    deleted = temp;
//    temp->prev->next = temp->next;
////    temp->next->prev = temp->prev;
//    free(deleted);
//    
//    return head;
//}
//
//


//
//CIRCULAR LINKED LISTS
// **************************************************

//
//#include <stdio.h>
//#include <stdlib.h>
//struct node{
//    struct node*next;
//    int data;
//};
//struct node*circularAdd(struct node*head,int data,int after);
//struct node*circularDelete(struct node*head,int data);
//void printCircularList(struct node* head);
//int main(int argc, const char * argv[]){
//    struct node*head = NULL;
//    struct node*temp ;
//    head = circularAdd(head, 912,912);
//    head = circularAdd(head, 28,912);
//    head = circularAdd(head, 53,28);
//    
//    
//    head = circularDelete(head, 53);
//    temp = head;
////        while (temp!=NULL) {
////            printf("%d ",temp->data);
////            temp = temp->next;
////        }
//    
//    printCircularList(head);
//        printf("\n");
//    
//    return 0;
//}
//
//struct node*circularAdd(struct node*head,int data,int after){
//    struct node*temp;
//    struct node*newNode;
//    newNode = malloc(sizeof(struct node));
//    newNode->data = data;
//    if(head == NULL){
//        head = newNode;
//        newNode->next = newNode;
//        return head;
//    }
//    temp = head;
//    while (temp->data != after) {
//        temp = temp->next;
//    }
//    temp->next = newNode;
//    newNode->next = head;
//    
//    return head;
//}
//
//struct node*circularDelete(struct node*head,int data){
//    struct node*temp;
//    struct node*deleted;
//    if(head == NULL){
//        printf("there is nothing to delete");
//        return 0;
//    }
//    temp = head;
//    while (temp->next != head) {
//               temp = temp->next;
//           }
//    if (head->next == head) {
//               // Only one node in the circular list
//               free(deleted);
//               return NULL;
//           }
//    if(temp->next->next->data ==head->data){
//        deleted =  temp;
//        deleted = deleted->next;
//        temp->next = head;
//        free(deleted);
//    }
//   
//    
//    deleted =  temp;
//    deleted = deleted->next;
//    temp->next = deleted->next;
//    free(deleted);
//    
//    return head;
//    
//}
//
//void printCircularList(struct node* head) {
//    if (head == NULL) {
//        printf("Circular list is empty\n");
//        return;
//    }
//
//    struct node* temp = head;
//
//    do {
//        printf("%d ", temp->data);
//        temp = temp->next;
//    } while (temp != head);
//
//    printf("\n");
//}
//struct node* circularDelete(struct node* head, int data) {
//    struct node* temp;
//    struct node* deleted;
//
//    if (head == NULL) {
//        printf("There is nothing to delete\n");
//        return head;
//    }
//
//    temp = head;
//    // Check if the first node (head) is the one to be deleted
//    if (temp->data == data) {
//        deleted = temp;
//        while (temp->next != head) {
//            temp = temp->next;
//        }
//        if (head->next == head) {
//            // Only one node in the circular list
//            free(deleted);
//            return NULL;
//        }
//        temp->next = head->next;
//        head = head->next;
//        free(deleted);
//        return head;
//    }
//
//    // Search for the node to be deleted
//    while (temp->next != head && temp->next->data != data) {
//        temp = temp->next;
//    }
//
//    if (temp->next == head) {
//        printf("Node with data %d not found\n", data);
//        return head;
//    }
//
//    deleted = temp->next;
//    temp->next = deleted->next;
//    free(deleted);
//
//    return head;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#define STACK_SIZE 10
//
//
//typedef struct {
//    struct node*top;
//    int cnt;
//}stack;
//
//struct node {
//    struct node*next;
//    int data;
//};
//int pop(stack *stk);
//void push(stack *stk,int x);
//int main(int argc, const char * argv[]){
//    stack *stk = malloc(sizeof(stack));
//    struct node*temp;
//  
//    stk->top =NULL;
//    stk->cnt = 0;
//    push(stk,2);
//    push(stk,5);
//    push(stk,9);
//    
//    printf("%d",stk->cnt);
//    printf("\n");
//    
//    
//    temp  = stk->top;
//    int a = stk->cnt;
//    while (a>0) {
//        printf("%d ",temp->data);
//        a--;
//        temp = temp->next;
//    }
//    printf("\n");
//    pop(stk);
//    pop(stk);
//    
//    temp  = stk->top;
//     a = stk->cnt;
//    while (a>0) {
//        printf("%d ",temp->data);
//        a--;
//        temp = temp->next;
//    }
//    printf("\n");
//    printf("%d",stk->cnt);
//    return 0;
//}
//
//void push(stack *stk,int x){
//    
//    struct node*newNode ;
//    newNode = malloc(sizeof(struct node));
//    newNode->data = x;
//    if(stk->cnt == STACK_SIZE){
//        printf("stack is full");
//        return;
//    }
//    if(stk->cnt == 0){
//        stk->top = newNode;
//        
//    }
//    else{
//        newNode->next = stk->top;
//        stk->top = newNode;
//        
//    }
//    stk->cnt++;
//    
//}
//
//int pop(stack *stk){
//    struct node*temp;
//    
//    if(stk->cnt == 0){
//        printf("the list is empty");
//        
//    }
//    temp = stk->top;
//    temp = temp ->next;
//    free(stk->top);
//    stk->top = temp;
//   
//    stk->cnt --;
//    
//    return  stk->cnt;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#define STACK_SIZE 10
//
//
//typedef struct {
//   int top;
//    int data[STACK_SIZE];
//}stack;
//
//struct node {
//    struct node*next;
//    int num;
//};
//
//void push(stack *stk,int x);
//int pop(stack *stk);
//
//int main(int argc, const char * argv[]) {
//    stack *stk ;
//    stk->top = -1;
//    
//    push(stk, 12);
//    push(stk, 65);
//    push(stk, 44);
//    push(stk, 99);
//    int  a = stk->top;
//    for(int i = 0;i<=a;i++) {
//        
//        printf("%d",stk->data[a]);
//        a--;
//    }
//    pop(stk);
//    pop(stk);
//    a = stk->top;
//    for(int i = 0;i<=a;i++) {
//        
//        printf("%d",stk->data[a]);
//        a--;
//    }
//    
//    
//}
//void push(stack *stk,int x){
//    if(stk->top == STACK_SIZE-1){
//        printf("stack is full");
//    }
//    else{
//        stk->top++;
//        stk->data[stk->top] = x;
//    }
//    
//}
//
//
//int pop(stack *stk){
//    
//    if(stk->top == -1){
//        printf("stack is empty");
//        return 0;
//    }
//    else{
//        int x = stk->data[ stk->top];
//        stk->top--;
//        return x;
//    }
//}




#include <stdio.h>
#include <stdlib.h>

#define QUEUE_SIZE 5

struct node{
    int data;
    struct node*next;
};
typedef struct {
    struct node *front;
    struct node *rear;
    int cntr;
}queue;
void enqueue(queue *q,int x);
int dequeue(queue *q);
int main(int argc, const char * argv[]){
    queue *q = (queue *)malloc(sizeof(queue));
    q->cntr = 0;
    q->front = q->rear = NULL;
    
    enqueue(q, 10);
       enqueue(q, 20);
       enqueue(q, 30);

       printf("Dequeue: %d\n", dequeue(q));
       printf("Dequeue: %d\n", dequeue(q));

       free(q);
    
    
    return 0;
}
int isFull(queue *q){
    if(q->cntr == QUEUE_SIZE){
        return 1;
    }
    else{
        return 0;
    }
   
}
int isEmpty(queue *q){
    if(q->cntr==0){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(queue *q,int x){
    if(isFull(q))
        printf("the queue is full");
    else{
        struct node*temp = malloc(sizeof(queue));
        temp->data = x;
        temp->next = NULL;
        if(isEmpty(q)){
            q->front = q->rear= temp;
        }
        else{
            q->rear ->next = temp;
            q->rear = temp;
            
        }
        q->cntr ++;
    }
    
}

int dequeue(queue *q){
    int x;
    if(q->cntr == 0){
        printf("the queue is empty");
    }
    else{
        struct node *temp = q->front;
       x = temp->data;
        q->front = q->front->next;
        free(temp);
    }
    q->cntr --;
    return x;

}
