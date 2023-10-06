#include <iostream>

void deleteElement(int arr[], int *size, int element)
{
    int count = 0;
    for (int i = 0; i < *size; i++)
    {
        if (element == arr[i])
        {
            for (int j = i; j < *size; j++)
            {
                arr[j] = arr[j + 1];
            }
            count++;
        }
    }
    *size -= count;
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
    int element = 0;
    std::cin >> element;
    int arr[] = {25, 23, 24, 27, 32, 31, 51, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 0;
    deleteElement(arr, &size, element);
    printArr(arr, size);
}