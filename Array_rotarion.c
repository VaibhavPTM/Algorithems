#include <stdio.h>

void main()
{   //           0  1  2  3  4  5  6  7  8  9  10 11 12 13 14 15 16 17 18
    int arr[] = {5, 6, 6, 7, 7, 7, 8, 8, 8, 9, 9, 9, 1, 1, 1, 2, 3, 4, 5};
    int n, first = 0, last, mid, temp;
    n = sizeof(arr) / sizeof(int);
    last = n - 1;
    printf("Start");
    while (first <= last)
    {
        mid = first + (last - first) / 2;
        if (arr[first] < arr[last])
        {
            temp = first;
            break;
        }
        else if (arr[mid] < arr[(mid + n - 1) % n] && arr[mid] <= arr[(mid + 1) % n])
        {
            temp = mid;
            break;
        }
        else if (arr[first] <= arr[mid])
        {
            first = mid + 1;
        }
        else if (arr[mid] <= arr[last])
        {
            last = mid - 1;
        }
    }
    printf("Array is roteted %d times", temp);
}