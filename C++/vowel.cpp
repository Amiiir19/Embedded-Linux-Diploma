#include <iostream>

int main()
{
    std::cout << "Please Enter the required letter to check if it is vowel or not " << std::endl;
    char x;
    char arr[5] = {'a', 'e', 'i', 'o', 'u'};
    std::cin >> x;
    for (int i = 0; i < 5; i++)
    {
        if (x == arr[i])
        {
            std::cout << "Vowel letter";
            break;
        }
        else if (x != arr[i] && i == 4)
        {
            std::cout << "Not Vowel letter";
        }
    }
}