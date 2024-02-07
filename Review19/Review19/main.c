//
//  main.c
//  Review19
//
//  Created by Macbook Air on 6.01.2024.
//
//
//Soru 2: Fonksiyona parametre olarak gelen sayının tam bölenlerini, tanımlanan “q” kuyruğuna sırasıyla ekleyen fonksiyonu yazınız? ( Ör: 12 sayısı için; 1,2,3,4,6 ve 12 tam bölenleridir.)
//


#include <stdio.h>
#include<stdlib.h>
#define QUEUE_SIZE 20


struct node {
    struct node*next;
    int data;
};

struct queue {
    struct node*front;
    struct node*rear;
    int cnt;
    int data[QUEUE_SIZE];
};
struct queue* enqueue(int sayi){
   struct queue*temp= malloc(sizeof(struct node));
    temp->front = temp->rear = NULL;
  
    for(int i=1;i<=sayi;i++){
        if(sayi%i == 0){
            printf("***%d****" ,i);
            struct node*newNode = malloc(sizeof(struct node));
            newNode->data = i;
            if(temp->front ==NULL){
                temp->front = temp->rear= newNode;
                newNode->next =NULL;
            }
            else{
                
                temp->rear->next = newNode;
                temp->rear = newNode;
            }
           
         
        }
      
    }
    
    return temp;
}

void printing(struct queue *q){
    struct node *temp;
    temp = q->front;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main(int argc, const char * argv[]) {
    struct queue*temp= malloc(sizeof(struct node));

    temp = enqueue(12);
    printing(temp);
    
    return 0;
}
