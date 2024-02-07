//
//  main.c
//  Review12
//
//  Created by Macbook Air on 28.12.2023.
//
#include <stdlib.h>
#include <stdio.h>
struct  node {
    struct node *next;
    int data;
};
struct node *istenilenPozisyon(struct node*head,int pozisyon,int data){
    struct node *temp;
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    temp = head;
    while (temp->data != pozisyon){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
    
}
struct node *basa(struct node*head,int deger){
  
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = deger;
    newNode->next = head;
    head = newNode;
    
    return head;
    
}
struct node *sona(struct node*head,int data){
    struct node *newNode = malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    struct node *temp;
    temp = head;
    if(head == NULL){
        head = newNode;
        return newNode;
    }
    else{
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        return head;
    }
}

struct node* deleteFirst(struct node*head){
    struct node*temp;
  
    if (head!=NULL) {
        temp = head;
        head = head->next;
        free(temp);
        
        
    }
    return head;
}

struct node* deleteLast(struct node*head){
    struct node*temp;
    temp = head;
    if (head!=NULL) {
        while (temp->next->next!=NULL) {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
     
        
        
    }
    return head;
}
struct node* deleteWanted(struct node*head,int position){
    struct node*temp;
    struct node*deleted;
    if(head!=NULL){
        temp = head;
        while (temp->next->data != position) {
            temp = temp->next;
        }
        deleted = temp->next;
        temp->next = deleted->next;
        free(deleted);
        
    }
    return head;
}


//6 5 444 2929 111
int main(int argc, const char * argv[]) {
    struct node *head = NULL;
    struct node *temp ;
    head = basa(head, 5);
    head = basa(head, 6);
    head = basa(head, 32);
    head = sona(head, 111);
    head = sona(head, 34);
    
    head = istenilenPozisyon(head, 5, 444);
    head = istenilenPozisyon(head, 444, 2929);
    head = deleteFirst(head);
    head = deleteLast(head);
    head = deleteWanted(head, 2929);
    temp =head;
    while (temp!=NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    return 0;
}


