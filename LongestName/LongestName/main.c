//
//  main.c
//  LongestName
//
//  Created by Macbook Air on 29.10.2023.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char studentName[20];
    struct node *next;
    
    
};


struct node *addNode (struct node*head,char name[20]);
char *longestName(struct node *head);



int main(int argc, const char * argv[]) {
    struct node *head = NULL;
    struct node *temp;
    char name[20];
    for(int i = 0;i<3;i++){
        printf("please enter a name\n");
        scanf("%s",name);
        head = addNode(head, name);
    }
    temp = head;
    while (temp!=NULL) {
        printf("%s  ",temp->studentName);
        temp = temp->next;
        
        
    }
    printf("\n");
  
    
    char *output = longestName(head);
    
    if (output != NULL) {
        printf("Longest Name: %s\n", output);
    } else {
        printf("The list is empty.\n");
    }
    
    return 0;
}



struct node *addNode (struct node*head,char name[20]){
    
    struct node *temp;
    struct node *newNode;
    newNode = malloc(sizeof(struct node));
    strcpy( newNode->studentName ,name);
    newNode ->next = NULL;
    temp = head;
    if (temp == NULL){
        head = newNode;
        
    }
    else{
        while (temp->next!= NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    return head;
}

char *longestName(struct node *head) {
    if (head == NULL) {
        return NULL;
    }

    char *longest = head->studentName;
    struct node *temp = head->next;

    while (temp != NULL) {
        if (strlen(temp->studentName) > strlen(longest)) {
            longest = temp->studentName;
        }
        temp = temp->next;
    }

    return longest;
}
