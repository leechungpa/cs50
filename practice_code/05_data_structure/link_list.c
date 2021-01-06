#include <stdio.h>
#include <stdlib.h>


// 연결 리스트 : def node structure
typedef struct node
{
    // node 안에서 정수형 값이 저장되는 변수 지정
    int number; 
    // 다음 node의 주소를 가리키는 포인터를 *next로 지정
    struct node *next;
}
node;



int main(void)
{
    // list of size 0
    node *list = NULL;

    // add number to list : list-1
    node *n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 1;    // (*n).numer = 1 와 동일
    n->next = NULL;
    list = n;

    // add another number to list : list-1-2
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 2;
    n->next = NULL;
    list->next = n; // list는 첫번째 node를 가리키므로 next를 통해 다음 node 포인터 지정

    // add another number to list : list-1-2-3
    n = malloc(sizeof(node));
    if (n == NULL)
    {
        return 1;
    }
    n->number = 3;
    n->next = NULL;
    list->next->next = n;

    // list 출력
    for (node *tmp = list; tmp != NULL; tmp = tmp->next)
    {
        printf("%i\n", tmp->number);
    }

    // 메모리를 해제
    while (list != NULL)
    {
        node *tmp = list->next;
        free(list);
        list = tmp;
    }
}
