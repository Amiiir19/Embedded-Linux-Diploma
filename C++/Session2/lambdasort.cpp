#include <algorithm>
#include <iostream>
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
    int arr[] = {5, 2, 3, 1, 7, 6};
    int size = sizeof(arr) / sizeof(int);
    int ty = 0;
    std::cin >> ty; // 0 ascending 1 descending

    std::sort(std::begin(arr), std::end(arr), [ty](int first, int second)
              {
                  if (ty == 0)
                  {
                      return first < second;
                  }
                  else
                  {
                      return first > second;
                  } });

    printArr(arr, size);
}