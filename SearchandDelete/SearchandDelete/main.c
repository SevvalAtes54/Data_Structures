
//
//  main.c
//  StudentNameSearch
//
//  Created by Macbook Air on 29.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char studentName[20];
    int studentID;
    struct node *next;
};
struct node *addNode(struct node *head,char name[20],int id);
struct node *deleteNode(struct node *head,char name[20]);

int main(int argc, const char * argv[]) {
    char name[20];
   int id;
    char wantedName[20];
    struct node *head = NULL;
    struct node *temp;
    
    for(int i=0;i<3;i++){
        printf("please enter a name\n");
        scanf("%s",name);
        printf("please enter a id\n");
        scanf("%d",&id);
       
        head = addNode(head, name,id);
    }
    temp = head ;
    while (temp!=NULL) {
        printf("%s ",temp->studentName);
        printf("%d ",temp->studentID);
        temp = temp->next;
     
    }
    printf("\n");
    printf("ssonrasını silemk istediğiniz ismi gir\n");
    scanf("%s",wantedName);
    head = deleteNode(head, wantedName);
    
    printf("\n\n");
    temp = head ;
    while (temp!=NULL) {
        printf("%s ",temp->studentName);
        printf("%d ",temp->studentID);
        temp = temp->next;
    }
    printf("\n");
    return 0;
}

struct node *addNode(struct node *head,char name[20],int id){
    struct node *newNode ;
    struct node *temp ;
    newNode = malloc(sizeof(struct node));
    temp = head;
    strcpy(newNode->studentName, name);
       newNode->studentID = id;
       newNode->next = NULL;

   
    if (head ==NULL) {
        head = newNode;
    }
    else{
        while (temp->next !=NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    
    return head;
}


struct node *deleteNode(struct node *head,char name[20]){
    struct node *temp;
    temp = head;
  
    struct node *deleted;
   
    deleted = head;
    while (temp != NULL) {
           if (strcmp(temp->studentName, name) == 0) {
               deleted = deleted->next;
               temp->next = deleted->next;
               free(deleted);
               return head;
           }
           else{
               temp = temp->next;
               deleted = deleted->next;
           }
       }
       
       return NULL;
   
    
}
