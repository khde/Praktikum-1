
typedef struct Bintree {
    struct Bintree *left;
    char node;
    struct Bintree *right;
} Bintree;

extern struct Bintree* konstrukt_bintree(unsigned int tiefe);
extern void print_inorder(const Bintree *bintree);
extern unsigned int _count(const Bintree *bintree);
#define count(x) (_count(x) + 1)
