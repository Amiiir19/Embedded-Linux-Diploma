#include <iostream>

int func(int arr[], int size)
{
    int max = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (max <= arr[i])
        {
            max = arr[i];
        }

    }

    return max;
}
int main()
{   
    int arr[] = {25, 23, 24, 27, 29, 31, 22, 1};    
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = func(arr, size);
    std::cout << x << std::endl;
}