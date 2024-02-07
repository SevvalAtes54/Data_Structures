//
//  main.c
//  REVIEW40
//
//  Created by Macbook Air on 12.01.2024.
//

#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node*left;
    struct node*right;
    int data;
};


typedef struct node BST;
BST *insertNode(BST *root,int data){
    BST *temp = malloc(sizeof(BST));
    temp ->data = data;
    
    if(root == NULL){
        root = temp;
        return root;
    }
    else{
        if(data<root->data){
            root->left = insertNode(root->left, data);
        }
        
        else{
            root->right = insertNode(root->right, data);
        }
        
    }
    return root;
}
void inorder(BST *root) {
    if(root != NULL) {
        printf("%d   ", root -> data);
        inorder(root -> left);
      
        inorder(root -> right);
    }
}
BST *whileminus1(BST *root){
    BST *temp= malloc(sizeof(BST));
    int a=0;
    printf("bir değer girin\n");
    while (a!=-1){
        scanf("%d",&a);
        root =  insertNode(root, a);
    }
    return root;
}
int height(BST*root){
    if(root == NULL){
        return -1;
    }
    int lheight,rheight;
    lheight = height(root->left);
    rheight = height(root->right);
    if(lheight>rheight){
        return lheight+1;
    }else{
        return rheight+1;
    }
    
}
BST *mirror(BST *root){
    if(root==NULL){
        return root ;
    }
    BST *temp = root->left;
    root->left = root->right;
    root->right =temp;
    
    mirror(root->left);
     mirror(root->right);
    
    return root;
    
}
int dugumsayisi(BST *root){
    if(root == NULL){
        return 0;
    }
    return 1+ dugumsayisi(root->left) + dugumsayisi(root->right) ;
    
}

BST *delete(BST *root,int a){
    BST *p,*q;
    if(root == NULL){
        return NULL;
}
    if(root->data == a){
        if(root->left ==NULL && root->right == NULL){
            free(root);
            return root;
        }
        else if (root->right == NULL){
            p = root->left;
            free(root);
            return p;
            
        }
        else if (root->left == NULL){
            p = root->right;
            free(root);
            return p;
        }
        else{
            p = root->right;
            q = root->right;
            while (p->left!=NULL) {
                p= p->left;
                
            }
            p->left = root->left;
            free(root);
            return q;
        }
    }
    else if (root->data < a){
        root->right = delete(root->right, a);
    }else{
        root->left = delete(root->left, a);
    }
    return root;
}

//
//int dugumBulma(BST *root,int a){
//    if(root->data == a){
//        return root->data;
//    }
//    else{
//        while(root->data != a){
//            root->left = dugumBulma(root->left, a);
//            root->right = dugumBulma(root->right, a);
//
//        }
//    }
//};
int main(int argc, const char * argv[]) {
    BST *bst = malloc(sizeof(BST));
    bst = bst->left = bst->right = NULL;
   
    bst = whileminus1(bst);
    
    
    inorder(bst);
   bst =  mirror(bst);
    printf("\n");
    inorder(bst);
    printf("\ndugum sayisi : %d",dugumsayisi(bst));
    printf("\nyukseklik : %d",height(bst));
    
    bst = delete(bst, 23);
    printf("\n");
    inorder(bst);
    
    return 0;
}
