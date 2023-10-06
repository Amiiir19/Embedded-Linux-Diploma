#include <iostream>

int func(int arr[], int size, int num)
{
    for (int i = 0; i < size; i++)
    {
        if (num == arr[i])
        {
            return i;
        }
    }

    return -1;
}
int main()
{
    int num = 0;
    std::cin >> num;
    int arr[] = {25, 23, 24, 27, 29, 31, 22, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = func(arr, size, num);
    if (x == -1)
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << "Postion is " << x << std::endl;
    }
}