//
//  main.c
//  StudentNode
//
//  Created by Macbook Air on 29.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    int studentID;
    int num;
    char name[20];
    struct node *next;
};
struct node *addList(struct node *head,int idd,int numm,char namee[20]);
int main(int argc, const char * argv[]) {
    
    struct node*head = NULL ;
    struct node*temp ;
    int identif,number;
    char nameStudent[20] ;
    for (int i = 0;i<3;i++){
        printf("enter an id\n");
        scanf("%d",&identif);
        printf("enter a num\n");
        scanf("%d",&number);
        printf("enter a name \n");
        scanf("%s",nameStudent);
        head = addList(head, identif, number, nameStudent);
        printf("\n");
    }
   
    return 0;
}

struct node *addList(struct node *head,int idd,int numm,char namee[20]){
    struct node *temp;
    temp = head;
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    newNode->next = NULL;
    strcpy(newNode->name, namee);
    newNode->num = numm;
    newNode->studentID = idd;
    if (head == NULL){
        head = newNode;
    }
    else{
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        
    }
    
    
    return head;
}
