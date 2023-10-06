#include <iostream>

void mergeArr(int arr1[], int arr2[], int arr3[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        arr3[i] = arr1[i];
    }
    for (int j = 0; j < size2; j++)
    {
        arr3[j + size1] = arr2[j];
    }
}
void printArr(int arr1[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n";
}

int main()
{
    int arr1[] = {1, 2, 3};
    int len1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {4, 5};
    int len2 = sizeof(arr2) / sizeof(int);

    int arr3[len1 + len2];

    mergeArr(arr1, arr2, arr3, len1, len2);
    printArr(arr1, len1);
    printArr(arr2, len2);
    printArr(arr3, len1 + len2);
}