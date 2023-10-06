#include <iostream>

auto squaring = [](int x) -> int
{
    return x * x;
};

int main()
{
    int x = 0;
    std::cin >> x;
    int y = squaring(x);
    std::cout << y << std::endl;
}