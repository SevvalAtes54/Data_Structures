//
//  main.c
//  QUEUEUEUEUEUE
//
//  Created by Macbook Air on 23.11.2023.
//

#include <stdlib.h>
#include <stdio.h>
#define QUEUE_SIZE 10
struct node{
    struct node*next;
    int data;
};
struct node*addNode(struct node*head,int key);
int main(int argc, const char * argv[]) {
    struct node*deneme;
    struct node*head = NULL;
  
   head =  addNode(head, 4);
    head =  addNode(head, 4);
    head =   addNode(head, 4);
    deneme = head;
        while (deneme!=NULL) {
            printf("%d",deneme->data);
            deneme = deneme->next;
         
        }
    return 0;
}
struct node*addNode(struct node*head,int key){
    struct node*newNode = malloc(sizeof(struct node));
    struct node*deneme;
    deneme = head;
    newNode->data = key;
    if(head == NULL){
        head = newNode;
        newNode->next = NULL;
    }
    else{
        newNode->next = head;
       
    }
 
    return newNode;
}
