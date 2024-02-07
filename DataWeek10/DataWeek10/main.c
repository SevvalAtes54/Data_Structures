//
//  main.c
//  DataWeek10
//
//  Created by Macbook Air on 7.12.2023.
//

#include <stdio.h>
#include <stdlib.h>
struct node {
    struct node *left;
    struct node *right;
    int data;
}node;
typedef struct node BTREE;

BTREE *insert(BTREE *root, int data) {
    BTREE *newNode = malloc(sizeof(BTREE));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    if (root == NULL) {
       
        return newNode;
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    if (data < root->data) {
        newNode = root->left;
    } else if (data > root->data) {
        newNode = root->right;
    }
    return root;
}
void inorderTraversal(BTREE *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        inorderTraversal(root->left);
       
        inorderTraversal(root->right);
    }
}
BTREE *deleteNode(BTREE *root,int data){
    if(root->left->data == data || root ->right->data  == data){
        
    }
}

int main(int argc, const char * argv[]) {
    BTREE *root = NULL;
  root =  insert(root,33);
    root =  insert(root,11);
    root =  insert(root,8);
    root =  insert(root,93);
    root =  insert(root,511);

   
    inorderTraversal(root);
    return 0;
}

