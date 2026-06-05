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
//     else
//     {
//         for (int i = size - 1; i >= index; i--)
//         {
//             arr[i + 1] = arr[i];
//         }
//         arr[index] = element;
//     }
//     return 1;
// }

// int indDeletion(int arr[], int size, int index)
// {
//     for (int i = index; i < size-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
// }

// int main()
// {
//     int arr[100] = {1, 23, 34, 45, 56};
//     int size = 5, index = 3;
//     display(arr, size);
//     // indInsertion(arr,size,element,index,100);
//     // size += 1;
//     // display(arr,size);
//     indDeletion(arr, size, index);
//     size -= 1;
//     display(arr, size);

//     return 0;
// }

// LINEAR SEARCH

// #include <stdio.h>

// int LinearSerach(int arr[], int size, int element)
// {
//     for (int i = 0; i < size-1; i++)
//     {
//         if (arr[i]==element)
//         {
//            return i;
//         }

//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {12, 243, 45, 667, 8, 78, 99, 67, 54, 6, 33};
//     int size = sizeof(arr)/sizeof(int);
//     int element = 1;
//     int Findarr = LinearSerach(arr,size,element);
//     printf("The element %d found at index %d.\n",element,Findarr);
//     return 0;
// }
// BINARY SEARCH
// #include <stdio.h>

// int BinarySerach(int arr[], int size, int element)
// {
//     int low, mid, high;
//     low = 0;
//     high = size - 1;
//     while (low <= high)
//     {
//         mid = (low + high) / 2;

//         if (arr[mid] == element)
//         {
//             return mid;
//         }
//         else if (arr[mid] < element)
//         {
//             low = mid + 1;
//         }
//         else
//         {
//             high = mid - 1;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {12, 43, 145, 667, 888, 978};
//     int size = sizeof(arr) / sizeof(int);
//     int element = 978;
//     int Findarr = BinarySerach(arr, size, element);
//     printf("The element %d found at index %d.\n", element, Findarr);
//     return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// int LiknkedlistTraversal(struct Node * ptr){
//     while (ptr != NULL)
//     {
//         printf("Element = %d\n",ptr->data);
//         ptr = ptr->next;
//     }
    
// }

// int main()
// {
//     struct Node *head;
//     struct Node *second;
//     struct Node *third;
//     struct Node *fourth;
//     head = (struct Node *)malloc(sizeof(struct Node));
//     second = (struct Node *)malloc(sizeof(struct Node));
//     third = (struct Node *)malloc(sizeof(struct Node));
//     fourth = (struct Node *)malloc(sizeof(struct Node));

//     head->data = 7;
//     head->next = second;

//     second->data = 9;
//     second->next = third;

//     third->data = 11;
//     third->next = fourth;

//     fourth->data = 66;
//     fourth->next = NULL;
//     LiknkedlistTraversal(head);

//     return 0;
// }