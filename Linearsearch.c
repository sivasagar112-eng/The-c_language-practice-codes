// Linear search
#include <stdio.h>

int Findarr(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 23, 45, 3, 785434, 6, 56, 44, 22, 7667};
    int size = sizeof(arr)/sizeof(int);
    int element = 3;
    int Findvalue = Findarr(arr, size, element);
    printf("The element %d is found in %d index", element, Findvalue);
    return 0;
}