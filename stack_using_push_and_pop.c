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
int main()
{
    struct stack *sp ;
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("The stack has been created !!!\n");

    printf("Before push Full : %d\n", isFull(sp));
    printf("Before push Empty : %d\n", isEmpty(sp));
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
    // push(sp, 68);  //-->> This is going to be overflow
    printf("After push Full : %d\n", isFull(sp));
    printf("After push Empty : %d\n", isEmpty(sp));
    // This is for pop the element from the stack
    printf("Popped element from the stack is %d \n", pop(sp));
    printf("Popped element from the stack is %d \n", pop(sp));
    printf("Popped element from the stack is %d \n", pop(sp));
    printf("Popped element from the stack is %d \n", pop(sp));
    printf("Popped element from the stack is %d \n", pop(sp));

    return 0;
}