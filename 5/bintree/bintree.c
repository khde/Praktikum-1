#include <stdlib.h> 
#include <stdio.h>
#include "bintree.h"


struct Bintree *konstrukt_bintree(unsigned int tiefe) {
    if (tiefe == 1) {
        Bintree *knoten = (Bintree *)malloc(sizeof(Bintree));
        knoten->left = NULL;
        knoten->right = NULL;
        return knoten;
    }
    else {
        Bintree *knoten = (Bintree *)malloc(sizeof(Bintree));
        knoten->left = konstrukt_bintree(tiefe - 1);
        knoten->right = konstrukt_bintree(tiefe - 1);
        return knoten;
    }
}


void print_inorder(const Bintree *bintree) {
    if (bintree->left != NULL) {
        print_inorder(bintree->left);
    }
    printf("\n%d", bintree->node);
    if (bintree->right != NULL) {
        print_inorder(bintree->right);
    }
}


unsigned int _count(const Bintree *bintree) {
    return (bintree->left == NULL ? 0 : 1 + _count(bintree->left)) + (bintree->right == NULL ? 0 : 1 + _count(bintree->right));
}
