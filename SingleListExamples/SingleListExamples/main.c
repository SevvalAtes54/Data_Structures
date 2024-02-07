////
////  main.c
////  SingleListExamples
////
////  Created by Macbook Air on 5.11.2023.
////
//
//
//
////
//////FACTORIAL
////#include <stdio.h>
////int funcRec(int num);
////int main(int argc, const char * argv[]) {
////    int num;
////    printf("bir sayi giriniz\n");
////    scanf("%d",&num);
////    int result = funcRec(num);
////    printf("Factorial of %d : %d \n",num,result);
////    return 0;
////}
////int funcRec(int num){
////    if( num == 1){
////        return 1;
////    }
////    return num*funcRec(num-1);
////    
////}
////************************************************
//
////STRUCTURES - ADD NODE AT FIRST LAST AND WANTED POSITION
////#include <stdio.h>
////#include <stdlib.h>
////#include <string.h>
////struct node{
////    int num;
////    struct node *next;
////};
////// ADDITION
////struct node* firstAdd(struct node*head,int value);
////struct node * lastAdd(struct node*head , int value);
////struct node*wantedPosition(struct node*head,int value,int pos);
////
////// DELETING
////struct node*deleteFirst(struct node*head);
////struct node*deleteLast(struct node *head);
////struct node*deleteWanted(struct node*head,int value);
////
////int main(int argc, const char * argv[]) {
////    struct node*head = NULL;
////    struct node*temp;
////    int value1 = 1,value2 = 2,value3=3,value4=4,value5=5,value6 = 43754;
////    
////    head = firstAdd(head,value1);
////    head = firstAdd(head,value2);
////    head = firstAdd(head,value3);
////    head = lastAdd(head,value4);
////    head = lastAdd(head,value5);
////    head = wantedPosition(head, value6, 3);
////    temp = head;
////    
////    while(temp!=NULL){
////        printf("%d ",temp->num);
////        temp= temp->next;
////    }
////    printf("\n");
////
////    head = deleteWanted(head,43754);
////    temp = head;
////    
////    while(temp!=NULL){
////        printf("%d ",temp->num);
////        temp= temp->next;
////    }
////    printf("\n");
////    
////    return 0;
////}
////
////
////struct node* firstAdd(struct node*head,int value){
////    struct node*temp;
////    struct node*newNode;
////    newNode = malloc(sizeof(struct node));
////    newNode->num = value;
////  
////    temp = head;
////    if(head == NULL){
////        head = newNode;
////        newNode->next = NULL;
////    }
////    
////        else{
////            newNode ->next = head;
////      head = newNode;
////        
////        }
//// 
////    return head;
////    
////}
////
////struct node * lastAdd(struct node*head , int value){
////    struct node* temp;
////    struct node* newNode;
////    newNode = malloc(sizeof(struct node));
////    newNode->next = NULL;
////    newNode->num = value;
////    temp = head;
////    if (head == NULL){
////        head = newNode;
////        printf("a");
////    }
////    else {
////        
////        while (temp->next != NULL) {
////           
////            temp = temp->next;
////
////        }
////        temp -> next  = newNode;
////       
////    }
////    return head;
////    
////}
////
////struct node*wantedPosition(struct node*head,int value,int pos){
////    struct node* newNode;
////    struct node*temp;
////    newNode = malloc(sizeof(struct node));
////    newNode->num = value;
////    temp = head;
////    int counter = 0;
////    while (temp!=NULL) {
////        counter ++;
////        temp = temp->next;
////    }
////    if (counter<pos){
////        printf("list is not enough for this position");
////        return 0;
////    }
////    else{
////        temp = head;
////        for(int i = 1;i<pos-1;i++){
////            temp = temp->next;
////        }
////        newNode->next = temp->next->next;
////        temp->next = newNode;
////      
////        
////    }
////    return head;
////    
////}
////
//////STRUCTURES - DELETE NODE AT FIRST LAST AND WANTED POSITION
////
////struct node*deleteFirst(struct node*head){
////    struct node*temp;
////    if (head == NULL){
////        printf("there is nothing to delete");
////        return 0;
////    }
////    temp = head->next;
////    free(head);
////    head =temp;
////    return head;
////    
////}
////struct node*deleteLast(struct node *head){
////    struct node *temp;
////    temp = head;
////    struct node *deletednode;
////    deletednode = head;
////    if (head  == NULL){
////        printf("there is nothing to delete");
////        return 0;
////    }
////    else{
////        while (temp->next->next != NULL) {
////            temp = temp->next;
////            deletednode = deletednode->next;
////        }
////       
////        temp->next = NULL;
////        deletednode = deletednode->next;
////        free(deletednode);
////       
////    }
////    return  head;
////    
////}
////
////struct node *deleteWanted(struct node *head, int value) {
////  if (head == NULL) {
////    return head;
////  }
////
////  if (head->num == value) {
////    struct node *temp = head->next;
////    free(head);
////    head = temp;
////    return head;
////  }
////
////  struct node *temp = head;
////  struct node *deletedNode = NULL;
////
////  while (temp->next != NULL && temp->next->num != value) {
////    temp = temp->next;
////  }
////
////  if (temp->next == NULL) {
////    return head;
////  }
////
////  deletedNode = temp->next;
////  temp->next = deletedNode->next;
////  free(deletedNode);
////  return head;
////}
////************************************************
//
////STRUCTURES - ADD NODE AT FIRST LAST AND WANTED POSITION -DOUBLE LINKED LIST
//
//#include <stdio.h>
//#include <stdlib.h>
//
//struct node {
//  int num;
//  struct node *prev;
//  struct node *next;
//};
//
//struct node* firstAdd(struct node*head,int value){
//    struct node*temp;
//    struct node*newNode;
//    newNode = malloc(sizeof(struct node));
//    newNode->num = value;
//
//    temp = head;
//    if(head == NULL){
//        head = newNode;
//        newNode->next = NULL;
//    }
//
//        else{
//            newNode ->next = head;
//      head = newNode;
//
//        }
//
//    return head;
//
//}
//struct node *implementation(struct node *head, int value) {
//    struct node*temp;
//    temp = head;
//    
//    for(int i = 1;i<2;i++){
//        temp = temp->next;
//    }
//    temp->prev = head;
//    temp->next->num = 15;
//    head->num = 5 ;
//    temp->num = 10;
//    
//    return head;
//    
//}
//
//int main(int argc, const char * argv[]) {
// 
//    struct node*temp;
//    struct node*head =NULL;
//    int value1=1,value2=2,value3 = 3;
//    head = firstAdd(head,value1);
//    head = firstAdd(head,value2);
//    head = firstAdd(head,value3);
//    temp = head;
//  while (temp != NULL) {
//      printf("%d ",temp->num);
//      temp = temp->next;
//  }
//    printf("\n");
//
//    head = implementation(head, 2);
//    
//    temp = head;
//  while (temp != NULL) {
//      printf("%d ",temp->num);
//      temp = temp->next;
//  }
//    printf("\n");
//  return 0;
//}



