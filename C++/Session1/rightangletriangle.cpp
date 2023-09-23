#include <iostream>
int main()
{
    int n = 10;
    std::cout<<"Please Enter the Height of the required Right angle Triangle"<<std::endl;
    std::cin>>n;
    for (int i = 0; i < n; i++)
    {
        std::cout << "|";
        for (int j = 1; j <= i; j++)
        {
            if (i == n - 1)
            {
                std::cout << "_";
            }
            else
            {
                std::cout << " ";
            }
        }
        std::cout << "\\" << std::endl;
    }
}
