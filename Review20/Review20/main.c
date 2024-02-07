//
//  main.c
//  Review20
//
//  Created by Macbook Air on 6.01.2024.
//

#include <stdio.h>
#include <stdlib.h>
//İçerisinde öğrenci bilgilerinin bulunduğu (adı, soyadı, okul numarası, vize ve final notu) düğümlerden oluşan bir ikili arama ağacında, sınıfın not ortalamasını hesaplayıp ortalamanın üzerinde olan öğrencilerin bilgilerini listeleyen kod parçasını yazınız?
struct node{
    struct node*left;
    struct node*right;
    int midterm;
    int final;
    int number;
    char name[3534];
    char surname[234];
};
typedef struct node BTREE;

int average(BTREE *b){
    BTREE *temp,*temp2;
    temp  = b;
    temp2 = b;
    int counterNode = 0;
    int counterPoint = 0;
    if(b == NULL)
        return 0;
    else{
        
        counterNode += 1 + average(temp->left) + average(temp->right);
        counterPoint += temp->left->midterm +temp->right->midterm + average(temp->left) + average(temp->right);
    }
    
    int avg = counterPoint / counterNode;
    return (float)counterPoint / counterNode;
    
}

struct node *addtoBtree(BTREE *b,int a){
    if (b == NULL) {
        BTREE* newNode = malloc(sizeof(BTREE));
        newNode->midterm = a;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }
    if (a < b->midterm) {
        b->left = addtoBtree(b->left, a);
    } else {
        b->right = addtoBtree(b->right, a);
    }
    return b;
}
int main(int argc, const char * argv[]) {
    BTREE *temp=malloc(sizeof(struct node));
    temp = NULL;
    addtoBtree(temp,578);
    addtoBtree(temp,3456);
    addtoBtree(temp,73);
    addtoBtree(temp,206);
    int b;
    b = average(temp);
    printf("%d",b);
    return 0;
}
