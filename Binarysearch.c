// Binary Search

#include <stdio.h>

int Linearsearch(int arr[], int size, int element)
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

int Binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        else if (arr[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 12, 34, 56, 78, 89, 90, 123, 234};
    int size = sizeof(arr) / sizeof(int);
    int element = 234;
    int Findvalue = Binarysearch(arr, size, element);
    if (Findvalue != -1)
    {
        printf("The element %d is found in %d index", element, Findvalue);
    }
    else
    {
        printf("Element Not Found");
    }

    return 0;
}
