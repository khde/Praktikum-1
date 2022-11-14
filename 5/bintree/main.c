#include "bintree.h"
#include <stdio.h>

int main(void) {
    Bintree *baum = konstrukt_bintree(5);
    print_inorder(baum);
    printf("\n%d\n", count(baum));
    return 0;
}
