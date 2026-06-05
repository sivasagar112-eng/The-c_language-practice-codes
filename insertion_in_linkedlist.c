//  AT THE FIRST
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node * insertAtFirst(struct Node * head, int data){
//     struct Node * ptr = (struct Node * ) malloc(sizeof(struct Node));

//     ptr->next = head;
//     ptr->data = data;
//     return ptr;

// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = NULL;
//     printf("Before insertion\n");
//     linkedlistTraversal(head);
//     head = insertAtFirst(head,56);
//     printf("After insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }

// AT THE INDEX OR BETWEEN

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *InsertAtIndex(struct Node *head, int data, int index)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;
//     int i = 0;
//     while (i != index - 1)
//     {
//         p = p->next;
//         i++;
//     }
//     ptr->data = data;
//     ptr->next = p->next;
//     p->next = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = NULL;

//     printf("Before Insertion\n");
//     linkedlistTraversal(head);
//     head = InsertAtIndex(head, 56, 1);
//     printf("After Insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }

// INSERT AT THE END
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node *InsertAtEnd(struct Node *head, int data)
// {
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     struct Node *p = head;

//     ptr->data = data;
//     while (p->next != NULL)
//     {
//         p = p->next;
//     }
//     p->next = ptr;
//     ptr->next = NULL;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = NULL;

//     printf("Before Insertion\n");
//     linkedlistTraversal(head);
//     head = InsertAtEnd(head, 56);
//     printf("After Insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }

// INSERT AFTER A NODE
// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };

// void linkedlistTraversal(struct Node *ptr)
// {
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct Node * InsertAfterNode(struct Node* head,struct Node* prevNode,int data){
//     struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
//     ptr->data = data;

//     ptr->next = prevNode->next;
//     prevNode->next = ptr;
//     return head;
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;

//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = NULL;

//     printf("Before Insertion\n");
//     linkedlistTraversal(head);
//     head = InsertAfterNode(head,second, 56);
//     printf("After Insertion\n");
//     linkedlistTraversal(head);

//     return 0;
// }