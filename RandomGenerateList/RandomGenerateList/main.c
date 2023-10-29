//
//  main.c
//  RandomGenerateList
//
//  Created by Macbook Air on 29.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
struct node {
    int num;
    struct node *next;
};
struct node *sort(struct node*head,int x);
struct node *addList(struct node*head,int x);
int main(int argc, const char * argv[]) {
    struct node*head = NULL;
    
    for (int i = 0;i<5;i++){
        int a = rand() % 120 +15;
        printf("%d ",a);
        head = addList(head, a);
        
    }
    printf("\n");
    struct node*temp = head;
    while(temp!=NULL ){
        printf("%d ",temp->num);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}


struct node *addList(struct node*head,int x){
    
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    struct node *temp;
    temp = head;
    newNode->num = x;
    newNode->next = NULL;
    if( head ==NULL){
        newNode->num = x;
        head = newNode;
    }
    else{
        while (temp->next!=NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
    
    return  head;
}
struct node *sort(struct node*head,int x){
    struct node *temp = head;
    int enkucuk;
    enkucuk =  head->num;
    temp = head->next;
    while (temp->next!=NULL) {
        if(temp->num<enkucuk){
            
            temp = temp->next;
            
        }
    }
    
    return head;
}

