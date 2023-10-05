#include <iostream>
void EvenorODD(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {

            std::cout << " Index " << i << " Value =  " << arr[i] << " is Even"
                      << " " << std::endl;
        }
        else
        {
            std::cout << " Index " << i << " Value =  " << arr[i] << " is Odd"
                      << " " << std::endl;
        }
    }
}

int main()
{
    int arr[] = {20, 57, 89, 52, 5};
    int size = sizeof(arr) / sizeof(int);
    EvenorODD(arr, size);
}