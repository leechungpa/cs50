#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// node structure for binary search tree
typedef struct node
{
    int number;
    // 자식 node
    struct node *left;
    struct node *right;
} node;

bool search(node *tree);


int main(void)
{
    // tree of size 0
    node *tree = NULL;

    // add number to tree : 3
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->left = NULL;
    n->right = NULL;
    tree = n;

    // add number to tree : 1-3
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;
    n->left = NULL;
    n->right = NULL;
    tree->left = n;

    // add number to tree : 1-3-5
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 5;
    n->left = NULL;
    n->right = NULL;
    tree->right = n;

    // search 50
    search(tree);

    // 메모리를 해제
    free(tree->right);
    free(tree->left);
    free(tree);
}



// 이진 검색 함수
bool search(node *tree)
{
    if (tree == NULL)
    {
        printf("there is not 50/n");
        return false;
    }
    else if (50 < tree->number)
    {
        return search(tree->left);
    }
    else if (50 > tree->number)
    {
        return search(tree->right);
    }
    else {
        printf("there is 50/n");
        return true;
    }
}
