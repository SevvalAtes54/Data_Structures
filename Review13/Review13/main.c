// Online C compiler to run C program online
// Double linked list
#include <stdio.h>
#include <stdlib.h>
 struct node{
    int data;
    struct node *next;
     struct node *prev;
};

struct node*ekleBasa(struct node*head,int data){
     struct node*newNode = malloc(sizeof(struct node));
    struct node*temp ;
    newNode->data = data;
   
  
    newNode->next = head;
    
    head = newNode;
    return head;
}

struct node*ekleSona(struct node*head,int data){
    struct node*temp;
    struct node*newNode=malloc(sizeof(struct node));
    temp = head;
    newNode->data = data;
    while(temp->next!=NULL){
        temp = temp->next;
        
    }
    newNode->prev = temp;
    temp->next = newNode;
    return head;
    
    
}

struct node*ekleWanted(struct node*head,int data,int position){
    struct node*temp;
    temp = head;
      struct node*newNode = malloc(sizeof(struct node));
      newNode->data = data;
      while(temp->data != position){
          temp = temp->next;
          
      }
      newNode->next = temp->next;
    temp->next->prev->prev = temp;
      return head;
    
}
struct node *deleteBaslangic(struct node*head){
     struct node*deleted ;
   if(head!=NULL){
       deleted = head;
       head = head->next;
       free(deleted);
       head->prev =NULL;
       
   }
   return head;
    
}
struct node *deleteWanted(struct node*head,int deletes){
     struct node*temp ;
     struct node*deleted;
     temp = head;
     while(temp->data!=deletes){
         temp = temp->next;
     }
     deleted = temp;
     temp ->prev->next = temp->next;
     temp->next->prev = temp->prev;
     free(deleted);
     return head;
}
struct node*CircularAddPosition(struct node *head,int data,int pos){
    struct node *temp;
    struct node *newNode = malloc(sizeof(struct node));
    newNode ->data = data;
     temp = head;
    if(head==NULL){
        head = newNode;
        newNode->next = head;
        return head;
    }
   
    else{
        while(temp->data != pos && temp->next != head){
            temp = temp->next;
        }
        if (temp==head){
            printf("boyle bir değer bulunamadı");
            return head;
            
        }
        else {
            newNode->next = temp->next;
          temp->next = newNode;
           return head;
        }
    }
}

//struct node*CircularDeletePosition(){
//    
//}


int main() {
 struct node*head = NULL;
 struct node*temp;
 head = ekleBasa(head,5);
  head = ekleBasa(head,77);
   head = ekleBasa(head,93);
    head = ekleSona(head,33);
       head = ekleSona(head,912);
     head = ekleSona(head,757);
  head = deleteBaslangic(head);
 head = deleteWanted(head,33);
  head = deleteWanted(head,912);
   temp = head;
   //77 5 33 912 757
   while(temp!=NULL){
       printf("%d ",temp->data);
       temp = temp->next;
   }

    return 0;
}

