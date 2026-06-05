#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("The stack is overflow can not push %d to the stack!!!\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The stack is Underflow can not pop form the stack!!!\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr, int i)
{
    int arrayInd = ptr->top - i + 1;
    if (arrayInd < 0)
    {
        printf("It is an Invalid Index !!!");
    }
    else
    {
        return ptr->arr[arrayInd];
    }
}
int main()
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 50;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("The stack has been created !!!\n");

    // printf("Before push Full : %d\n", isFull(sp));
    // printf("Before push Empty : %d\n", isEmpty(sp));
    push(sp, 35);
    push(sp, 13);
    push(sp, 90);
    push(sp, 89);
    push(sp, 78);
    push(sp, 67);
    push(sp, 45);
    push(sp, 34);
    push(sp, 23);
    push(sp, 12); //--->The stack is full
    push(sp, 1);
    push(sp, 2);
    push(sp, 55);
    for (int j = 1; j <= sp->top + 1; j++)
    {
        printf("The value at %d is %d \n", j, peek(sp, j));
    }

    return 0;
}