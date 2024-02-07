#include <stdio.h>
#include <stdlib.h>


typedef struct BTREE {
    struct BTREE *right;
    struct BTREE *left;
    int data;
} BTREE;

BTREE * newNode(int x){
    BTREE *newNode = malloc(sizeof(BTREE));
    
    newNode->left = NULL;
    newNode ->right = NULL;
    newNode->data =   x;
    
    return newNode;
}
BTREE *insert(BTREE *root, int x){
    if(root == NULL){
     root = newNode(x);
    }
    else{
        if (x < root->data) {
            root->left = insert(root->left, x);
        }
        else if (x > root->data){
            root->right = insert(root->right, x);
        }
    }
    return root;
}

BTREE *delete(BTREE *root,int a ){
    BTREE *p,*q;
    if(root == NULL){
        return NULL;
    }
    if(root->data == a ){
        
        if( root->left == NULL && root->right == NULL){
            free(root);
            return NULL;
        }
    
    else {
        if(root->left == NULL){
            p = root->right;
            free(root);
            return p;
            
        }
       else if(root->right == NULL){
            p = root->left;
            free(root);
            return p;
            
        }
       else{
        
           p = q = root ->right;
           while(p->left != NULL){
               p = p->left;
           }
           p->left = root ->left;
           free(root);
           return q;
       }
        
    }
    }
    if (a < root->left->data){
        root->left = delete(root->left, a);
    }
    else{
        root->right = delete(root->right, a);
    }
    return root;
    
    
    
}

int height(BTREE *root){
    if(root ==NULL){
        return -1;
    }
    int lheight,rheight = 0;
    lheight = height(root->left);
    rheight = height(root->right);
    if(lheight > rheight){
        return 1+ lheight ;
    }
    else{
        return 1+ rheight ;
    }
  
    
    
}




int main(void){
    
    BTREE *root = malloc(sizeof(BTREE));
 root = NULL;
  
   return 0;
}
