//
//  main.c
//  Review18
//
//  Created by Macbook Air on 6.01.2024.
//

//TEK BAĞLI LİSTE
#include <stdlib.h>
#include <stdio.h>

struct node{
    struct node*next;
    
    int data;
};


//struct node*Ekle(struct node *head,int data,int choice,int key){
//    struct node *newNode = malloc(sizeof(struct node));
//    newNode->data = data;
//    //LISTE BOS İSE
//    struct node *temp = head;
//    if(head == NULL){
//        head = newNode;
//        return head;
//    }
//  
//  
//    else{
//        //BASA EKLENECEKSE
//        if(choice == 1){
//            newNode->next = head;
//            head = newNode;
//            return head;
//            
//            
//        }
//        //SONA EKLENECEKSE
//        
//        else if(choice ==2){
//            temp = head;
//            while (temp->next !=NULL) {
//                temp = temp->next;
//                
//            }
//            temp->next = newNode;
//            newNode->next = NULL;
//            return head;
//            
//        }
//        else{
//            temp = head;
//            while (temp->data!=key) {
//                
//                if(temp->next == NULL){
//                    break;
//                }
//                
//                temp = temp->next;
//            }
//            newNode->next = temp->next;
//            temp->next = newNode;
//            
//            return head;
//        }
//    }
//    
//}
//
//
//struct node*Delete(struct node *head,int choice,int key){
//    struct node*temp;
//    struct node*deleted;
//    if(head == NULL){
//        printf("there is nothing to delete");
//        
//    }
//    else{
//        //delete from head
//        if(choice ==1){
//            temp = head;
//            head = head->next;
//            free(temp);
//            return head;
//        }
//        //delete from tail
//        else if(choice ==2){
//            temp = head;
//            while (temp->next->next !=NULL) {
//                temp = temp->next;
//            }
//            deleted = temp->next;
//            temp->next = NULL;
//            free(deleted);
//            return head;
//            
//        }
//        //delete key
//        else{
//            
//            temp = head;
//            while (temp->next->data!= key) {
//                temp = temp->next;
//            }
//            
//            deleted = temp->next;
//            temp->next = deleted->next;
//            free(deleted);
//            return head;
//        }
//        
//        
//        
//        
//        
//        
//    }
//    
//    return head;
//    
//    
//    
//}

void print(struct node*head){
    struct node *temp  = head;
    while (temp!=NULL) {
        printf("%d   ",temp->data);
        temp = temp->next;
    }
    
}
int main(int argc, const char * argv[]) {
//    struct node*head = NULL;
//    head = Ekle(head, 77, 1, 3);
//    head = Ekle(head, 547, 1, 3);
//    head = Ekle(head, 957, 1, 3);
//    head = Ekle(head, 123, 1, 3);
//    head = Ekle(head, 4465, 1, 3);
//    head = Ekle(head, 34234, 1, 3);
//    
//    
//    head = Ekle(head, 6778, 2, 3);
//    head = Ekle(head, 5675, 2, 3);
//    
//    
//    head = Ekle(head, 333, 3, 6778);
//    
////    34234   4465   123   957   547   77   6778   333   5675
////   - -  123   957   547   77   6778   333   5675
////    123   957   547   77   6778   - -
//    head = Delete(head, 1, 23);
//    head = Delete(head, 1, 345);
////    
//    head = Delete(head, 2, 22);
//    head = Delete(head, 2, 345);
////    
//    head = Delete(head, 3, 547);
//    head = Delete(head, 3, 6778);
////
////    
//    
//    print(head);
//    printf("\n");
    return 0;
}
