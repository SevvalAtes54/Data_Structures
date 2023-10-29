//
//  main.c
//  Lab2Datastr
//
//  Created by Macbook Air on 29.10.2023.
//
//
//#include <stdio.h>
//#include <stdlib.h>
//struct node {
//    int num;
//    struct node *next;
//};
//struct node *addToList(struct node*head ,int x);
//int main(int argc, const char * argv[]) {
//    int x = 0;
//    struct node *temp;
//    struct node *head = NULL;
//    while (x!=-1) {
//       
//        printf("please enter the odd value that you want to add to the list\n");
//        scanf("%d",&x);
//      if(x%2 ==1)  {
//          
//            head = addToList(head, x);
//        }
//      else{
//          printf("please enter an odd number\n");
//      }
//        
//    }
//    temp = head;
//    while(temp!= NULL){
//        printf("%d ",temp->num);
//        temp= temp->next;
//    }
//    
//    printf("\n");
//    return 0;
//}
//struct node *addToList(struct node*head ,int x){
//    struct node *temp;
//    temp = head;
//    struct node* newNode = malloc(sizeof(struct node));
//    newNode->num = x;
//    newNode ->next = NULL;
//    if (head==NULL) {
//        head = newNode;
//    }
//    else{
//        while (temp->next!=NULL) {
//            temp = temp->next;
//        }
//        temp->next = newNode;
//    
//    }
//    
//   
//    return  head;
//    
//}
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
  int num;
  struct node *next;
    
};

struct node *addLast(struct node *head,int x);
struct node *addFront(struct node *head,int x);
int main() {
    // Write C code here
    int sayi;
   struct node *head = NULL;
    struct node *temp;
for (int i = 0 ;i< 5;i++){
    printf ("bir sayi giriniz");
    scanf("%d",&sayi);
    
    if (sayi == -1){
        break;
    }
    else{
    if(sayi % 2 == 0){
        head = addLast(head,sayi);
    }
    else{
         head = addFront(head,sayi);
    }}
    
}

    temp = head;
    printf("\n");
    while(temp!=NULL){
        printf("%d  ",temp->num);
        temp = temp->next;
    }
    return 0;
}
struct node *addFront(struct node *head,int x){
    struct node *temp;
     struct node *addNode;
     addNode = malloc(sizeof(struct node));
     //addNode->next = NULL
    temp = head;
    addNode->num = x;
    if(head ==NULL){
        head = addNode;
    }
    else {
        addNode->next = head;
        head = addNode;
    }
    return head;
    
}

struct node *addLast(struct node *head,int x){
    struct node *temp;
     struct node *addNode;
     addNode = malloc(sizeof(struct node));
    addNode->next = NULL;
    temp = head;
    addNode->num = x;
    if(head ==NULL){
        head = addNode;
    }
    else {
      while(temp->next!=NULL){
          temp = temp->next;
      }
      temp ->next = addNode;
      
    }
    return head;
}
