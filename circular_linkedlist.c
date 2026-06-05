#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void circularLinkedlistTraversal(struct Node *head)
{
    struct Node *ptr = head;

    do
    {
        printf("Elements : %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *InsertatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *InsertatIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *InsertatEnd(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 11;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = head;

    printf("Before Insertion  \n");
    circularLinkedlistTraversal(head);
    head = InsertatFirst(head, 54);
    // head = InsertatIndex(head, 54, 2);
    // head = InsertatEnd(head, 54);
    printf("After Insertion  \n");
    circularLinkedlistTraversal(head);
    return 0;
}