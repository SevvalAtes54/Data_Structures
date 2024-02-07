//
//  main.c
//  Rewiew41
//
//  Created by Macbook Air on 12.01.2024.
//

#include <stdio.h>
#include <stdlib.h>
struct avltree{
    int data;
    int height;
    struct avltree*right;
    struct avltree*left;
};
typedef struct avltree AVLTREE;
int heightOfTree(AVLTREE *root){
    if(root == NULL){
        return 0;
    }
    int lheight,rheight;
    lheight = heightOfTree(root->left);
    rheight = heightOfTree(root->right);
    if (lheight>rheight) {
        return lheight+1;
    }
    else{
        return rheight+1;
    }
}
int maxValue(int a ,int b){
    if(a>b){
        return a;
    }
    else
        return b;
}
AVLTREE *newNode(AVLTREE *tree,int a){
    AVLTREE *temp = malloc(sizeof(AVLTREE));
    temp->left = temp->right = NULL;
    temp->data = a;
    tree = temp;
    return tree;
    
}

AVLTREE *rightrotate(AVLTREE *z){
    AVLTREE *temp = z->left;
    z->left = z->right;
    z->right = temp;
    z->height = maxValue(heightOfTree(z->left),heightOfTree(z->right)) +1;
    temp->height = maxValue(heightOfTree(z->left),heightOfTree(z->right)) +1;
    
    return temp;
    
}

//
//int findChilds(AVLTREE *root){
//    if(root == NULL){
//        return 0;
//    }
//    if(root->left !=NULL && root->right!=NULL){
//        
//        return 1 + findChilds(root->left) + findChilds(root->right);
//    }
//
//}
AVLTREE *leftrotate(AVLTREE *z){
    AVLTREE *temp = z->right;
    z->right = z->left;
    z->left = temp;
    z->height = maxValue(heightOfTree(z->left),heightOfTree(z->right)) +1;
    temp->height = maxValue(heightOfTree(z->left),heightOfTree(z->right)) +1;
    
    return temp;
    
}

AVLTREE *leftRightrotate(AVLTREE *z){
    z->left = leftrotate(z->left);
    return rightrotate(z);
}
AVLTREE *rightLeftrotate(AVLTREE *z){
    z->right = leftrotate(z->right);
    return leftrotate(z);
}

AVLTREE * insertToAVL(AVLTREE *tree,int a){
    if(tree!=NULL){
       if(a<tree->data)
          tree->left =  insertToAVL(tree->left, a);
        else
            tree->right = insertToAVL(tree->right, a);
        
        tree->height = maxValue(heightOfTree(tree->left), heightOfTree(tree->right))+1;
        
        if(heightOfTree(tree->left)-heightOfTree(tree->right)>1 && a<tree->left->data){
            return rightrotate(tree);
        }
        else if(heightOfTree(tree->left)-heightOfTree(tree->right)>1 && a>tree->left->data){
            return leftRightrotate(tree);
        }
        else if(heightOfTree(tree->left)-heightOfTree(tree->right)<-1 && a>tree->right->data){
            return leftrotate(tree);
        }
        else if(heightOfTree(tree->left)-heightOfTree(tree->right)<-1 && a<tree->right->data){
            return rightLeftrotate(tree);
        }
        
    }
    else{
        tree = newNode(tree, a);
       
    }
    return tree;
}

void inorder(AVLTREE *root) {
    if(root!=NULL){
        inorder(root->left);
        printf("%d   ",root->data);
        inorder(root->right);
        
    }
}

int main(int argc, const char * argv[]) {
  
    AVLTREE * root;
    root = malloc(sizeof(AVLTREE));
    root->left = root->right = NULL;
    root = insertToAVL(root, 34);
    root = insertToAVL(root, 78);
    root = insertToAVL(root, 45);
    root = insertToAVL(root, 84);
    root = insertToAVL(root, 29);
    
    inorder(root);
    
    return 0;
}
