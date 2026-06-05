// The code for insertion
// #include <stdio.h>

// void display(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
// int indInsertion(int arr[], int size, int element, int index, int capacity)
// {
//     if (size >= capacity)
//     {
//         return -1;
//     }
//     for (int i = size - 1; i >= index; i--)
//     {
//         arr[i + 1] = arr[i];
//     }
//     arr[index] = element;
// }

// int main()
// {
//     int arr[100] = {1, 23, 34, 45, 56};
//     int size = 5, element = 44, index = 2, capacity = 100;
//     display(arr, size);
//     indInsertion(arr, size, element, index, 100);
//     size += 1;
//     display(arr, size);
//     return 0;
// }

// The code for Deletion
#include <stdio.h>

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int indDeletion(int arr[], int size, int index)
{
    for (int i = index; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {1, 23, 34, 45, 56};
    int size = 5, index = 2;
    display(arr, size);
    indDeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}
