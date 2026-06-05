#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

void doublyLinkedlistTraversal(struct Node *n1)
{
    struct Node *ptr = n1;
    while (ptr != NULL)
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node *InsertAtFirst(struct Node *n1, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = n1;
    if (n1 != NULL)
    {
        n1->prev = ptr;
    }
    n1 = ptr;
    return n1;
}

struct Node *InsertatIndex(struct Node *n1, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = n1;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->prev = p;
    ptr->next = p->next;

    if (p->next != NULL)
    {
        p->next->prev = ptr;
    }
    p->next = ptr;
    return n1;
}

struct Node *InsertatEnd(struct Node *n1, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = n1;
    ptr->data = data;
    ptr->next = NULL;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    return n1;
}

int main()
{
    struct Node *n1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *n4 = (struct Node *)malloc(sizeof(struct Node));
    n1->data = 7;
    n1->prev = NULL;
    n1->next = n2;

    n2->data = 9;
    n2->prev = n1;
    n2->next = n3;

    n3->data = 11;
    n3->prev = n2;
    n3->next = n4;

    n4->data = 66;
    n4->prev = n3;
    n4->next = NULL;
    printf("Before Insertion \n");
    doublyLinkedlistTraversal(n1);

    // n1 = InsertAtFirst(n1, 54);
    n1 = InsertatIndex(n1, 54,2);
    // n1 = InsertatEnd(n1, 54);

    printf("After Insertion \n");
    doublyLinkedlistTraversal(n1);

    return 0;
}