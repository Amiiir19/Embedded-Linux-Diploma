#include <iostream>

int main() 
{


    std::cout << "Ascii Table code"<<std::endl;
    std::cout << "----------------------------------"<<std::endl;
    std::cout << "| \tChar\t | \tASCII\t |"<<std::endl;
    std::cout << "----------------------------------"<<std::endl;
    for (int x=32; x<128; x++) {
        char i= x;
    std::cout << "| \t"<<i<<"\t | \t"<<x<<"\t |"<<std::endl;
    }

    std::cout << "----------------------------------"<<std::endl;

    return 0;
}
